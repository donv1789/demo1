#include <bits/stdc++.h>
using namespace std;

typedef pair <int, int> ii;
typedef pair <int, ii> iii;

int a, b, c;
int dd[31][31][31];
char in[31][31][31];

void init(){
	for (int i=0; i<a; i++){
		for (int j=0; j<b; j++){
			for (int k=0; k<c; k++) dd[i][j][k]=0;
		}
	}
}

bool check(int x, int y, int z){
	if (x>=0 && x<a && y>=0 && y<b && z>=0 && z<c && in[x][y][z]!='#' && !dd[x][y][z]) return 1;
	return 0;
}

void BFS(iii s){
	int da[] = {1, 0, 0, -1, 0, 0};
	int db[] = {0, 1, 0, 0, -1, 0};
	int dc[] = {0, 0, 1, 0, 0, -1};
	queue <iii> q;
	q.push(s);
	dd[s.first][s.second.first][s.second.second] = 1;
	while (!q.empty()){
		iii v = q.front();
		q.pop();
		for (int i=0; i<6; i++){
			int x = v.first + da[i];
			int y = v.second.first + db[i];
			int z = v.second.second + dc[i];
			if (check(x, y, z)){
				q.push(iii(x, ii(y, z)));
				dd[x][y][z] = dd[v.first][v.second.first][v.second.second] + 1;
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while (t--){
		cin>>a>>b>>c;
		iii S, E;
		init();
		for (int i=0; i<a; i++){
			for (int j=0; j<b; j++){
				for (int k=0; k<c; k++){
					cin>>in[i][j][k];
					if (in[i][j][k]=='S') S = iii(i, ii(j, k));
					if (in[i][j][k]=='E') E = iii(i, ii(j, k));
				}
			}
			char tmp;
			scanf("%c", &tmp);
		}
		BFS(S);
		int tmp = dd[E.first][E.second.first][E.second.second];
		if (tmp!=0) cout<<tmp-1<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}

