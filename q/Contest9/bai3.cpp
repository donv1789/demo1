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
const bool MULTI_TEST = false;
using namespace std;



void solve(){
	int n;
	cin >> n;
//	int a[n+1][n+1];
//	vector<int> v[n+1];
	for(int i=1,tmp;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> tmp;
			if(tmp) cout << j << ' ';
		}
		cout << endl;
	}
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

