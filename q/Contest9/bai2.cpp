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
const bool MULTI_TEST = false;
const double PI = acos(-1.0);
using namespace std;



void solve(){
	int n;
    cin >> n;
    int a[n+1][n+1];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        int u,v;
        cin >> u >> v;
        a[u][v] = a[v][u] = 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i][j]) cout << i << ' ' << j << endl;
        }
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


