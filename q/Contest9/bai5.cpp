#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll,ll>
#define null NULL
const int N = (int) 1e6 ;
const int MOD = (int) 1e9 + 7;
const bool MULTI_TEST = true;
const double PI = acos(-1.0);
using namespace std;



void solve(){
	int n,k;
    cin >> n >> k;
    vector <int> edges[n+1];
    for(int i=0;i<k;i++){
        int u,v;
        cin >> u >> v;
//        if(u > v) swap(u,v);
        edges[u].pb(v);
//        edges[v].pb(u);
    }
    for(int i=1;i<=n;i++){
        cout << i <<": ";
        for(int j=0;j<edges[i].size();j++) cout << edges[i][j] << ' ';
        cout << endl;
    }
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){
		solve();
	}
    return 0;
}


