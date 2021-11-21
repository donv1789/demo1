#include <iostream>
#include <queue>
using namespace std;

typedef pair <int, int> ii;

int t, n, m, res;
int a[505][505], dx[] = {-1, -1, -1, 0, 1, 1, 1, 0}, dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

bool check(int a, int b){
	if( a < 1 || a > n || b < 1 || b > m ) return false;
	return true;
}

void bfs(ii s){
	queue <ii> q;
	q.push(s);
	a[s.first][s.second] = 0;
	while( !q.empty() ){
		ii z = q.front();
		q.pop();
		for(int i=0; i<8; i++){
			int x = z.first + dx[i], y = z.second + dy[i];
			if( check(x, y) && a[x][y] == 1 ){
				q.push( ii(x, y) );
				a[x][y] = 0;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cin>>t;
	while( t-- ){
		cin>>n>>m;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++) cin>>a[i][j];
		}
		res = 0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if( a[i][j] == 1 ){
					res++;
					bfs( ii(i, j) );
				}
			}
		}
		cout<<res<<endl;
	}
}
