#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
long long f[101][50001];
main(){
    int t,n,k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        if (!k&&n) cout << 0 << endl;
        else{
        	memset(f, 0, sizeof(f));
        	for (int i = 1; i <= 9; i++) 
				f[1][i] = 1;
	        for (int i = 2; i <= n; i++)
	            for (int j = 0; j <= k; j++)
	                for (int x = 0; x <= 9; x++)
	                    if (j-x >= 0)
	                        f[i][j] = (f[i][j] + f[i-1][j-x])%M;
	        cout << f[n][k] << endl;
		}
    }
}

