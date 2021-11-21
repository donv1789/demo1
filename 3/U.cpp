#include <bits/stdc++.h>
using namespace std;

const long long base = 1e9+7;

int main(){
	int t;
	cin>>t;
	while (t--){
		int DP[100001];
		int n, k;
		cin>>n>>k;
		DP[0] = 1;
		for (int i=1; i<=n; i++){
			DP[i] = 0;
			for (int j=i-1; j>=0 && j>=i-k; j--){
				DP[i] = (DP[i] + DP[j])%base;
			}
		}
		cout<<DP[n]<<endl;
	}
	return 0;
}

