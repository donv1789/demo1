#include<bits/stdc++.h>
using namespace std;
bool ok[1001];
vector<int> ke[1001];
void DFS(int u){
	ok[u]=true;
	cout<<u<<" ";
	for(int i=0;i<ke[u].size();i++){
		if(!ok[ke[u][i]]){
			ok[ke[u][i]]=true;
			DFS(ke[u][i]);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int u,n,m;// u- dinh dau, n-so dinh, m-so canh
		cin>>n>>m>>u;
		for(int i=1;i<=n;i++) ok[i]=false; //chua xet
		for(int i=0;i<1001;i++) ke[i].clear(); // xoa all dinh ke
		for(int i=1;i<=m;i++){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b); // ke cua dinh a la dinh b 
			ke[b].push_back(a);
		}
		DFS(u);
		cout<<endl;
	}
}
