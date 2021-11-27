#include<bits/stdc++.h>
using namespace std;
int n,m;
bool chuaxet[1005];
vector<int> List[1005];
bool check = false;
void DFS(int u,int t){
	chuaxet[u] = false ;
	for(int i=0;i<List[u].size();i++){
		int v = List[u][i];
		if(chuaxet[v]) DFS(v,u);
		else if(v!=t) check = true;
	}
}

void chutrinh(){
	check = false;
	for(int i=1;i<=n;i++){
		memset(chuaxet,true,sizeof(chuaxet));
		DFS(i,0);
		if(check){
			cout<<"YES"<<endl; return;
		}
	}
	cout<<"NO"<<endl;
}

main(){
	int t,x,u,y,i,v;
	cin>>t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(i=0;i<1005;i++) List[i].clear();
		cin>>n>>m;
		for(i=1;i<=m;i++){
			cin>>x>>y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		DFS(u,v);
		chutrinh();
		cout<<endl;
	}
	return 0;
}
