#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
const bool MULTI_TEST = true;
using namespace std;

vector<vector<int> > edges;
int n,k,S,E;
vector<bool> mark;

void dfs(int ver){
	for(int i=0;i<edges[ver].size();i++){
		if(mark[edges[ver][i]] == 0){
			mark[edges[ver][i]] = 1;
			dfs(edges[ver][i]);
		}
	}
}

void solve(){
	edges.clear();
	cin >> n >> k;
	edges.resize(n+5,vector<int>(0));
	mark.clear();
	mark.resize(n+5,0);
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		edges[u].pb(v);
		edges[v].pb(u);
	}
	int res = 0;
	for(int i=1;i<=n;i++){
		if(mark[i] == 0){
			mark[i] = 1;
			res++;
			dfs(i);
		}
	}
	cout << res << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

