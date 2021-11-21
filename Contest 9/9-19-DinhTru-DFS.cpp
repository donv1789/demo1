#include<bits/stdc++.h>
using namespace std;
bool check[1005];
int v,e;
vector<int> ke[1005];// thanh phan lien thong dfs
void dfs(int u){
	check[u]= true;// da xet;
	for(int i=0; i< ke[u].size(); i++){
		if(!check[ke[u][i]]) 
		dfs(ke[u][i]);
	}
}
void dinhtru(int v){
	for(int u =1; u <= v ; u++){
		check[u]= true;
		if(u==1) dfs(2);
		else dfs(1);
		bool check2 = false;
		for(int i=1 ; i <= v ; i++){
			if(!check[i]) check2= true;
		}
		if(check2) cout << u <<" ";
		memset(check,false,sizeof(check));
	}
}
int main(){
	int t ; cin >>t ;
	while(t--){
		int v,e; cin>> v>> e;
		for(int i =0; i< 1005; i++) ke[i].clear();
		for(int i= 1; i <=e ; i++){
			int dinh1, dinh2;
			cin >> dinh1>> dinh2 ;
			ke[dinh1].push_back(dinh2);
			ke[dinh2].push_back(dinh1);
		}
		
		memset(check,false,sizeof(check));
		dinhtru(v);	
		cout << endl;
	 }
}
