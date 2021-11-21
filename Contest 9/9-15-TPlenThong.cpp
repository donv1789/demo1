#include<bits/stdc++.h>
using namespace std;
bool check[1005];
int v,e; 
vector<int> ke[1005];
void DFS(int u){
	check[u]= true;// da xet;
	for(int i=0 ; i< ke[u].size() ;i++){
		if(!check[ke[u][i]]) DFS(ke[u][i]);
	}
}
void TPLienThong(){
	int tplt = 0;//khoi tao so tplt =0;
		memset(check,false,sizeof(check));
		for(int i= 1; i<= v ; i++){
			if(!check[i]){
				tplt++;
				DFS(i);
			}
		}
		cout << tplt;
}
int main(){
	int t ; cin >>t ;
	while(t--){
		cin>> v>> e;
		for(int i =0; i< 1005; i++) ke[i].clear();
		for(int i= 1; i <=e ; i++){
			int dinh1, dinh2;
			cin >> dinh1>> dinh2 ;
			ke[dinh1].push_back(dinh2);
			ke[dinh2].push_back(dinh1);
		}
		TPLienThong();		
		cout << endl;
	}
}
