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
int n,k,S,E;
vector<bool> mark;
bool ok = false;
int bf[1001];

void dfs(int ver){
	if(ver == E){
		ok = true;
		return;
	}
	for(int i=0;i<edges[ver].size();i++){
		if(mark[edges[ver][i]] == 0){
			mark[edges[ver][i]] = 1;
			bf[edges[ver][i]] = ver;
			dfs(edges[ver][i]);
		}
	}
}

void solve(){
	edges.clear();
	cin >> n >> k >> S >> E;
	edges.resize(n+1);
	mark.clear();
	mark.resize(n+1,0);
	ok = false;
	mark[S] = 1;
	bf[S] = 0;
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		edges[u].pb(v);
//		edges[v].pb(u);
	}
	dfs(S);
	if(!ok) cout << "-1";
	else{
		stack <int> st;
		while(bf[E]){
			st.push(E);
			E = bf[E];
		}
		st.push(E);
		while(!st.empty()){
			cout << st.top() << ' ';
			st.pop();
		}
	}
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

