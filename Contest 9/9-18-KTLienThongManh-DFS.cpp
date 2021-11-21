#include<bits/stdc++.h>// lie thong manh la duyet het cac dinh
using namespace std;
bool ok[1005];int dem;
vector<int> ke[1005];
void bfs(int u){
	queue<int> q;
	ok[u]= true;// da xet
	q.push(u);
	while(!q.empty()){
		int t= q.front();
		q.pop();
		//cout << t <<" ";
		for(int i=0 ; i <ke[t].size(); i++){
			if(ok[ke[t][i]]== false){
				q.push(ke[t][i]);
				ok[ke[t][i]]= true ;
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
			int dinh1, dinh2;
			cin >> dinh1>> dinh2 ;
			ke[dinh1].push_back(dinh2);
			//ke[dinh2].push_back(dinh1);
		}
		dem= 1;//khoi tao so tplt =0;
		memset(ok,false,sizeof(ok));
		bfs(1);
		if(dem == v) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
}
