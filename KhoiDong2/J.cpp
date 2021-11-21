#include <bits/stdc++.h>
#define for1(i,k,n) for(i = k; i <= n; i++)
#define for2(i,k,n) for(i = k; i >= n; i--)
#define ll long long
#define base 1000000007

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	ll a;
	while(t--){
		cin >> a;
		int i;
		ll dem=0;
		for1(i,1,sqrt(a)){
			if(a%i==0){
				if(i%2==0) dem++;
				if(a/i%2==0) dem++;
			}
			if(i==sqrt(a)&&i%2==0) dem--;
		}
		cout << dem <<endl;
	}
}



