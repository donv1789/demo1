#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];
void DFS(int u){
	check[u]= true;// den u thi la da tham
	
	for(int i = 0 ; i< ke[u].size(); i++){
		if(!check[ke[u][i]]) {
			DFS(ke[u][i]); 
			truoc[ke[u][i]]=u;
		}
	}
}
void xuat(int nguon, int dich){
	
	if(truoc[dich] != 0) cout << "YES";
	else cout <<"NO";
	cout << endl;	
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i= 0; i <1001; i++){
			ke[i].clear();
		}
		memset(check,false,sizeof(check));
		int v,e;
		cin >> v >> e  ;
		for(int i= 1; i<= e; i++){
			int dinh1,dinh2;
			cin >> dinh1 >> dinh2;
			ke[dinh1].push_back(dinh2);
			ke[dinh2].push_back(dinh1);
		}
		int m; cin >> m ;
		for(int i = 0; i<m ; i++){
			int m1, m2;
			
			cin >> m1 >> m2;
			memset(truoc,0,sizeof(truoc));
			memset(check,false,sizeof(check));
			DFS(m1);
			xuat(m1, m2);
			
		}
			
	}
}
