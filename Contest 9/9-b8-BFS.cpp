#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1001];
bool cx[1001];
void BFS(int u){
	queue <int> a;
	cx[u] = true;
	a.push(u);
//	cout<<u<<" ";
	while(a.size() > 0){
		int fr = a.front();
		a.pop();
		cout<<fr<<" ";
		for(int i=0; i<ke[fr].size(); i++){
			if(!cx[ke[fr][i]]){
				cx[ke[fr][i]] = true;
				a.push(ke[fr][i]);
			}
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
			ke[b].push_back(a);
		}
		BFS(u);
		cout<<endl;
	}
}
