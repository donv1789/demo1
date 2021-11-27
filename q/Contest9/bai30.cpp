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
vector <int> in,out;

void dfs(int ver){
	cnt++;
	for(int i=0;i<edges[ver].size();i++){
		if(mark[edges[ver][i]] == 0){
			mark[edges[ver][i]] = 1;
			dfs(edges[ver][i]);
		}
	}
}

bool checkCircle(){
    for(int i=1;i<=n;i++){
        if(in[i] != out[i]){
            return 0;
            // return;
        }
    }
    mark.clear();
    mark.resize(n+1,0);
	cnt = 0;
    mark[1] = 1;
    dfs(1);
    if(cnt < n) return 0;
    return 1;
}

bool check_way(){
    mark.clear();
    mark.resize(n+1,0);
	cnt = 0;
    mark[1] = 1;
    dfs(1);
    if(cnt < n) return 0;

    int tM = 0,tP = 0;
    for(int i=1;i<=n;i++){
        if(in[i] != out[i]){
            if(in[i] - out[i] == 1) tM++;
            else if(out[i] - in[i] == 1) tP++;
            else return 0;
        }
    }
    if(tM == tP && tM == 1) return 1;
    return 0;
    // return 0;
}

void solve(){
	edges.clear();
	cin >> n >> k;
	edges.resize(n+1,vector<int>(0));
    in.clear();
    in.resize(n+1,0);
    out.clear();
    out.resize(n+1,0);
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		edges[u].pb(v);
		edges[v].pb(u);
        in[v]++;
        out[u]++;
	}
    if(checkCircle()) {
        cout << "2\n";
        return;
    }
    if(check_way()){
        cout << "1\n";
        return;
    }
    cout <<"0\n";
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

