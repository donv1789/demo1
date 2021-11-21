#include<bits/stdc++.h>

using namespace std;



string s;

int dp[1005][1005];
int dem=0;
void trace(int l, int r) {
    if (l == r) {
        dem++;
        return;
    }

    if (s[l] == s[r]) {
        dem++;
        trace(l+1,r-1);
        dem++;
        return;
    }

    if (dp[l][r] == dp[l+1][r]) trace(l+1,r);
    else trace(l,r-1);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		// init
    	cin >> s;
    	int n = s.size();

   	 // dp
   		for(int len = 1; len <= n; len++)
        	for(int l = 0; l < n - len + 1; l++) {
            	int r = l + len - 1;

            // corner cases
            	if (len == 1) { dp[l][r] = 1; continue; }
            	if (len == 2) { dp[l][r] = 1 + (s[l] == s[r]); continue; }

            	dp[l][r] = max(dp[l+1][r], dp[l][r-1]);
            	if (s[l] == s[r]) dp[l][r] = max(dp[l][r], 2 + dp[l+1][r-1]);
        	}

   	 // trace
    	trace(0, n-1);
    	cout<<dem<<endl;
    	dem=0;
	}
    

    return 0;
}
