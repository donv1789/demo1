#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool check[1005];
int truoc[1005];
void BFS(int u, int v){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int top= q.front();
		q.pop();
		check[top]= true;// lay ra roi danh dau // da xet roi
		if(top== v) return;
		for(int i=0 ; i <ke[top].size(); i++){
			if(check[ke[top][i]]== false){
				check[ke[top][i]]= true ;
				truoc[ke[top][i]]=top;
				q.push(ke[top][i]);
			}
		}
	}	
}
void xuat(int nguon, int dich){
	stack<int>st;
	st.push(dich);
	if(!check[dich]){
		cout << -1; return;
	}
	while(st.top() != nguon){
		int top=st.top();
		st.push(truoc[top]);
		
	}
	int dem = 0 ;
	while(!st.empty()){
		int t= st.top(); st.pop();
		cout << t<<" ";
		dem++;
	}
	if(dem ==0) cout << -1;
	cout << endl;
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
			ke[dinh2].push_back(dinh1);
		}		
		BFS(nguon,dich);
		xuat(nguon,dich);
	}
}
