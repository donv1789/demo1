#include<bits/stdc++.h>
using namespace std;
const int N = 1e9 + 7;
long long f[1005][1005];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0 ; i <= 1000; i++) {
		f[0][i] = 1;
	}
	for (int j = 1 ; j <= 1000; j++) {
		for (int i = 1 ; i <= j; i++) {
			f[i][j] = f[i][j - 1] + f[i - 1][j - 1];
			f[i][j] %= N;
		}
	}
	while (t--) {
		int n, k;
		cin >> n >> k;
		cout << f[k][n] << endl;
	}
	return 0;
}

