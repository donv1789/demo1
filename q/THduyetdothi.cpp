#include<bits/stdc++.h>
using namespace std;
int n,m,u;
bool chuaxet[1005];
vector<int> List[1005];
void DFS(int u){
	chuaxet[u] = false;
	cout<<u<<" ";
	for(int i =0; i<List[u].size(); i++){
		int v = List[u][i];
		if(chuaxet[v]) DFS(v);
	}
}
main(){
	int t,u,x,y,i;
	cin>>t;
	cin>>n>>m>>u;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(i=0;i<1005;i++) List[i].clear();

		for(i=1;i<=m;i++){
			cin>>x>>y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
	}
	cout<<"DFS("<<u<<") = ";
	DFS(u);
		cout<<endl;
	return 0;
}
