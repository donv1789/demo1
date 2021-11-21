#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int sotest ;
	cin >> sotest;
	while(sotest--) {
		multiset <ll> s;
		ll n , bl = 1; 
		cin >> n ;
		int a[n+5];
		for(ll i = 1 ; i <= n; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		for(ll i = 1 ; i <= n ; i++) {
			if(s.count(a[i])  >= 2) {
				cout << a[i] << endl;
				bl = 0;
				break;
			}
		}
		if(bl) cout << "NO" << endl;
	}
	return 0;
}
