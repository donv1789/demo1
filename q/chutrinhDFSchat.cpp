#include<bits/stdc++.h>
using namespace std;
vector<int> List[1001];
bool vt[1001];
bool in[1001];
int n,m;

bool dfs(int i){
	vt[i]=true;
	in[i]=true;
	for(int j=0;j<List[i].size();j++){
		if(!vt[List[i][j]] && dfs(List[i][j])) return true;
		else if(in[List[i][j]]) return true;
	}
	in[i]=false;
	return false;
}

bool ham(){
	memset(vt,false,sizeof(vt));
	memset(in,false,sizeof(in));
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		List[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		if(dfs(i)){
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<=n;i++){
			List[i].clear();
		}
		if(ham()) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

