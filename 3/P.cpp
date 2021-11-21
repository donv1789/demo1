#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n , f[1001] , a[1001] , res = 0 ;
	cin >> n ;
	for( int i=0;i<n;i++) {
		cin >> a[i] ;
		f[i] = 1 ;
		for( int j=0;j<i;j++)
			if ( f[j] + 1 > f[i] && a[i] > a[j] ) f[i] = f[j] + 1 ;
		if ( f[i] > res ) res = f[i] ;
	}
	cout << res << endl ;
	return 0;
}

