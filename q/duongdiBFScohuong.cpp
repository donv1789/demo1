#include <bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
int truoc[1005];
void BFS(int u, int v){
	queue<int> q;
	q.push(u);
	while(q.size()>0){
		int x=q.front();q.pop();
		chuaxet[x]=true;
		if(x==v)return;
		for(int i=0;i<List[x].size();i++){
			if(!chuaxet[List[x][i]]){
				chuaxet[List[x][i]]=true;
				truoc[List[x][i]]=x;
				q.push(List[x][i]);
			}
		}
	}
}
void Trace(int u, int v){
	if(!chuaxet[v]){
		cout<<-1;
		return;
	}
	vector<int> a;
	while(u!=v){
		if(u==0){
			cout<<-1;
			return;
		}
		a.push_back(u);
		u=truoc[u];
	}
	a.push_back(v);
	reverse(a.begin(),a.end());
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<' ';
	}
}
int main(){

	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1001;i++)
			List[i].clear();
		memset(chuaxet,false,sizeof(chuaxet));
		memset(truoc,0,sizeof(truoc));
		int n,m,u,v;
		cin>>n>>m>>u>>v;
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			List[x].push_back(y);
			List[y].push_back(x);			
		}
		BFS(u,v);
		if(chuaxet[v]==true) Trace(v,u);
		else cout<<-1;
		cout<<endl;
	}
}

