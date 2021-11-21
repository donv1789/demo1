#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];
void DFS(int u, int v){
	if(check[v]) return;
	check[u]= true;// den u thi la da tham
	for(int i = 0 ; i< ke[u].size(); i++){
		if(!check[ke[u][i]]) {
			truoc[ke[u][i]]=u;
			DFS(ke[u][i],v); 
		}
	}
}
void DuongDi(int u, int v){
	if(!check[v]){
		cout << -1; return ;
	}
	stack<int> st;
	while(u != v){
		st.push(v);
		v = truoc[v];
	}
	st.push(v);
	while(! st.empty()){
		cout << st.top() << " ";st.pop();
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i= 0; i <1001; i++){
			ke[i].clear();
		}
		memset(check,false,sizeof(check));
		memset(truoc,0,sizeof(truoc));
		
		int v,e, nguon, dich;
		cin >> v >> e >> nguon >> dich ;
		for(int i= 1; i<= e; i++){
			int dinh1,dinh2;
			cin >> dinh1 >> dinh2;
			ke[dinh1].push_back(dinh2);
		//	ke[dinh2].push_back(dinh1);
		}
		DFS(nguon,dich);
		DuongDi(nguon,dich);
		cout << endl;
	}
}
