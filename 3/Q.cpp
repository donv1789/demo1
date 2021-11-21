#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

int f[205][40005];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int n, s;
    while(t--){
    	cin >> n >> s;
    	vector<int> a(n + 5);
    	for (int i = 1 ; i <= n; i++) {
    		cin >> a[i];
    	}
    	f[0][0] = 1;
    	for (int i = 1 ; i <= n; i++) {
    		for (int j = 1; j <= s; j++) {
    			if (a[i] <= j) f[i][j] = f[i - 1][j] | f[i - 1][j - a[i]];
    			else f[i][j] = f[i - 1][j];
    		}
    	}
    	cout << (f[n][s] ? "YES" : "NO")<<endl;
	}
    
    
	return 0;
}

