#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const int MOD = (int)1e9+7;
const bool MULTI_TEST = true;
using namespace std;

vector<vector<int> > edges;
int n,k,start;
vector<bool> mark;

void dfs(int ver){
	cout << ver << ' ';
	for(int i=0;i<edges[ver].size();i++){
		if(mark[edges[ver][i]] == 0){
			mark[edges[ver][i]] = 1;
			dfs(edges[ver][i]);
		}
	}
}

void solve(){
	edges.clear();
	cin >> n >> k >> start;
	edges.resize(n+1,vector<int>(0));
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		edges[u].pb(v);
		edges[v].pb(u);
	}
	mark.clear();
	mark.resize(n+1,0);
	mark[start] = 1;
	dfs(start);
	cout << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

