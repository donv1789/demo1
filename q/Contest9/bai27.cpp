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
bool ok;
vector <int> in;

void solve(){
	edges.clear();
	cin >> n >> k;
	edges.resize(n+1,vector<int>(0));
    in.clear();
    in.resize(n+1,0);
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		edges[u].pb(v);
        in[v]++;
	}
    queue <int> q;
    int cnt = 0;
    for(int i=1;i<=n;i++) if(in[i] == 0) q.push(i);
    while(!q.empty()){
        cnt++;
        int u = q.front();
        q.pop();
        for(auto i:edges[u]){
            if(--in[i] == 0)
                q.push(i);
        }
    }
    if(cnt != n) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

