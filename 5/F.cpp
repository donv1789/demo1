#include<bits/stdc++.h>
using namespace std;
int d[1005][1005];
int n;
char m[1005][1005];
typedef pair<int,int> ii;

int check(int x, int y){
	if (x>=n || x<0) return 0;
	if (y>=n || y<0) return 0;
	if (m[x][y] == 'X') return 0;
	return 1;
}

void bfs(ii s) 
{
	memset(d,-1,sizeof(d));
	queue <ii> qu;
	d[s.first][s.second]=0;
	qu.push(s);
	while( !qu.empty() )
	{
		ii u = qu.front();
		qu.pop();
		int fi=u.first;
		int se=u.second;
		for (int j=se+1; j<n; j++){
			int x=fi,y=j;
			if(check(x,y) && d[x][y]==-1){
				d[x][y] = d[fi][se]+1;
				qu.push(ii(x,y));
			}
			else break;
		}
		for (int j=se-1; j>=0; j--){
			int x=fi,y=j;
			if(check(x,y) && d[x][y]==-1){
				d[x][y] = d[fi][se]+1;
				qu.push(ii(x,y));
			}
			else break;
		}
		for (int j=fi-1; j>=0; j--){
			int x=j,y=se;
			if(check(x,y) && d[x][y]==-1){
				d[x][y] = d[fi][se]+1;
				qu.push(ii(x,y));
			}
			else break;
		}
		//sang phai
		for (int j=fi+1; j<n; j++){
			int x=j,y=se;
			if(check(x,y) && d[x][y]==-1){
				d[x][y] = d[fi][se]+1;
				qu.push(ii(x,y));
			}
			else break;
		}
	}
} 

int main()
{
	cin>>n;
	for(int i=0; i<n; i++)
	 for(int j=0; j<n; j++) cin>>m[i][j];
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	ii s(x1,y1);
	bfs(s);
	cout<<d[x2][y2];	
}
