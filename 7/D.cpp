#include<bits/stdc++.h>
using namespace std;
int d[1005][1005];
int dx[8]={-1, 1, 2, -2, -1, 1, -2, 2};
int	dy[8]={-2,-2,-1, 1,  2, 2, -1, 1};
typedef pair<int,int> ii;

void bfs(ii s) 
{
	memset(d,-1,sizeof(d));
	queue <ii> qu;
	for(int i=0; i<1005; i++)
	 for(int j=0; j<1005; j++) d[i][j]=-1;
	d[s.first][s.second]=0;
	qu.push(s);
	while( !qu.empty() )// kiem tra vec-to co rong k
	{
		ii u = qu.front();//tra ve gia tri phan tu dau tien
		qu.pop();// xoa phan tu dau tien
		for( int i = 0; i < 8; i++) 
		{
			int x=u.first+dx[i], y=u.second+dy[i];
			if (x>0 && x<=8 && y>0 && y<=8 && d[x][y]==-1)
			{
				d[x][y] = d[u.first][u.second] + 1;
				ii tmp(x,y);
				qu.push(tmp);
			}
		}
	}
} 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string st,ed;
		cin>>st>>ed;
		int x1=st[0]-'a'+1, y1=st[1]-'0', x2=ed[0]-'a'+1, y2=ed[1]-'0';
//		cout<<x1<<" "<<y1<<endl;
//		cout<<x2<<" "<<y2<<endl;	
		ii s(x1,y1);
		bfs(s);
		cout<<d[x2][y2]<<endl;		
	}
}
