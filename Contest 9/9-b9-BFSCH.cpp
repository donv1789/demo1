#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1001];
bool cx[1001];
void BFSCH(int u){
	cx[u]=true;
	queue <int> q;
	q.push(u);
	while(q.size() > 0){
		int fr=q.front();
		q.pop();
		cout<<fr<<" ";
		for(int i=0; i<ke[fr].size(); i++){
			if(!cx[ke[fr][i]]){
				cx[ke[fr][i]] = true;
				q.push(ke[fr][i]);
			}
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int e,u,v;
		cin>>v>>e>>u;
		for(int i=1; i<=v; i++) cx[i] = false;
		for(int i=0; i<1001; i++) ke[i].clear();
		for(int i=0; i<e; i++){
			int a, b;
			cin>>a>>b;
			ke[a].push_back(b);
		}
		BFSCH(u);
		cout<<endl;
	}
}
