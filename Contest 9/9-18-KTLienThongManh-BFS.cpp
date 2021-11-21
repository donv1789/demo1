#include<bits/stdc++.h>// lie thong manh la duyet het cac dinh
using namespace std;
bool check[1005];
int dem;
vector<int> ke[1005];
void bfs(int u){
	queue<int> q;
	check[u]= true;// da xet
	q.push(u);
	while(!q.empty()){
		int t= q.front();
		q.pop();
		for(int i=0 ; i <ke[t].size(); i++){
			if(check[ke[t][i]]== false){
				q.push(ke[t][i]);
				check[ke[t][i]]= true ;
				dem++;
			}
		}
	}	
}
int main(){
	int t ; cin >>t ;
	while(t--){
		int v,e; cin>> v>> e;
		for(int i =0; i< 1005; i++) ke[i].clear();
		for(int i= 1; i <=e ; i++){
			int a, b;
			cin >> a>> b ;
			ke[a].push_back(b);
			//ke[b].push_back(a);
		}
		dem= 1;//khoi tao so tplt =0;
		memset(check,false,sizeof(check));
		bfs(1);
		if(dem == v) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
}
