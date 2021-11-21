#include<iostream>
#include<queue>
using namespace std;
queue<pair<pair<int,int>,int> >q;
int m,n,table[600][600],Max=0;
int x[]={-1,1,0,0},y[]={0,0,-1,1}; // truc Oxy
int check()
{
	for(int i=0; i<m; i++)
	 for(int j=0; j<n; j++)
	  if(table[i][j])
	   return 1;
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>m>>n;
	for(int i=0;i<m;i++)
	 for(int j=0;j<n;j++)
	  {
	  	int x;
	  	cin>>x;
	  	if(x==1)table[i][j]=1;
	  	if(x==2){
	  		pair<int,int> temp=make_pair(i,j);
	  		q.push(make_pair(temp,0));
		  }
	  }
	while(!q.empty())
	{
		pair<pair<int,int>,int> top=q.front();
		pair<int,int> xy=top.first;
		q.pop();
		for(int i=0;i<4;i++)
		 if(xy.first+x[i]>=0 && xy.first+x[i]<m && xy.second+y[i]>=0 
		 && xy.second<n && table[xy.first+x[i]][xy.second+y[i]])
		 {
		 	pair<int,int> temp=make_pair(xy.first+x[i],xy.second+y[i]);
		 	table[xy.first+x[i]][xy.second+y[i]]=0;
		 	q.push(make_pair(temp,top.second+1));
		 	if(top.second+1>Max)Max=top.second+1;
		 }
	}
	if(check()) cout<<-1<<endl;
	else cout<<Max<<endl;
}
