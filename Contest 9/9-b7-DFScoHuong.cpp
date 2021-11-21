#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1001]; //dinh ke
bool cx[1001];
void DFSCH(int u){
	cx[u] = true;
	cout<<u<<" ";
	for(int i=0; i<ke[u].size(); i++){
		if(!cx[ke[u][i]]){
			cx[ke[u][i]] = true;
			DFSCH(ke[u][i]);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int u,v,e;
		cin>>v>>e>>u; // v-so dinh, e-so canh.
		for(int i=1; i<=v; i++) cx[i]=false;
		for(int i=0; i<=1001; i++) ke[i].clear();
		for(int i=0; i<e; i++){
			int a,b;
			cin>>a>>b; // nhap vao canh a,b
			ke[a].push_back(b);
		}
		DFSCH(u);
		cout<<endl;
	}
}
