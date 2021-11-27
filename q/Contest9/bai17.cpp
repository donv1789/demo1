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
int n,k,cnt;
vector<bool> mark;

void dfs(int ver){
	cnt++;
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
	edges.resize(n+1,vector<int>(0));
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		edges[u].pb(v);
		// edges[v].pb(u);
	}
	for(int i=1;i<=n;i++){
		mark.clear();
		mark.resize(n+1,0);
		cnt = 0;
		mark[i] = 1;
		dfs(i);
		if(cnt < n){
			cout <<"NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

