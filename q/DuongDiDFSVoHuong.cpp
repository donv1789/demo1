#include<bits/stdc++.h>
using namespace std;
int truoc[1005],n,m,u,v;
bool duyet[1005];
vector<int> List[1005];

void DFS(int u){
	duyet[u]=false;
	for(int i=0;i<List[u].size();i++){
		int v=List[u][i];
		if(duyet[v]){
			truoc[v]=u;
			DFS(v);
		}
	}
}

void induongdi(){
	stack<int>st;
	st.push(v);
	while(st.top()!=u){
		int t=st.top(); st.push(truoc[t]);
	}
	while(!st.empty()){
		int t=st.top(); st.pop();
		cout<<t<<" ";
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int i,x,y;
		cin>>n>>m>>u>>v;
		for(i=0;i<1005;i++) List[i].clear();
		memset(duyet,true,sizeof(duyet));
		memset(truoc,0,sizeof(truoc));
		for(i=1;i<=m;i++){
			cin>>x>>y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(u);
		if(duyet[v]==true) cout<<-1;
		else induongdi();
		cout<<endl;
	}
}
