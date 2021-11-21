#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll base = 1e9+7;

ll F2, F3, F4, A, B, C, L, R;

ll Pow(long long a, long long b){
	if (b==0) return 1;
	if (b%2==0){
		long long p=Pow(a, b/2);
		return (p*p)%base;
	}
	else {
		long long p=Pow(a, b-1);
		return (p*a)%base;
	}
}

void Solve(){
	ll tmp = cbrt(F3)+1;
	for (ll i = tmp; i>=0; i--){
		ll f2 = F2 - i*i;
		ll f4 = F4 - i*i*i*i;
		if (f2<0 || f4<0) continue;
		ll delta = f2*f2 - 2*(f2*f2-f4);
		if (delta<0) continue;
		ll tmp1 = sqrt(delta);
		if (tmp1*tmp1 != delta) continue;
		ll x1 = (tmp1+f2)/2;
		x1 = sqrt(x1);
		ll x3 = (f2-tmp1)/2;
		if (x3<0) continue;
		x3 = sqrt(x3);
		if (x1*x1+i*i+x3*x3==F2 && x1*x1*x1+i*i*i+x3*x3*x3==F3 && 
			x1*x1*x1*x1+i*i*i*i+x3*x3*x3*x3==F4){
			A = x1;
			B = i;
			C = x3;
			return ;
		}
	}
}

ll Count(ll n){
	if(n == 1) return (R - L + 1);
	ll ans = Pow(n,L);
	ll ans1 = Pow(n,R-L+1) - 1;
	if(ans1 < 0) ans1 += base;
	ans1 = (ans1 * Pow(n-1,base-2)) % base;
	ans = (ans * ans1) % base;
	return ans;
}


int main() {
	int t;
	cin>>t;
	while (t--){
		cin>>F2>>F3>>F4>>L>>R;
		Solve();
		ll tmp = (Count(A)+Count(B)+Count(C))%base;
		cout<<tmp<<endl;
	}
	return 0;
}

