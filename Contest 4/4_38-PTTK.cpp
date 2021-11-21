#include<bits/stdc++.h>
#define ll long long
#define max 1000000
using namespace std ;
main(){
	int t;  
	cin>> t;
	while(t--){
		ll n ,m ,k;
		cin >> m >> n >> k;
		ll A[m], B[n], s;
		priority_queue<ll,vector<ll>,greater<ll> > p;
		for(ll i =0; i< m; i++){
			cin >> A[i] ; 
			p.push(A[i]) ;
		}
		for(ll i =0; i< n; i++){
			cin >> B[i]; 
			p.push(B[i]) ;
		}
		while(k>0){
			s = p.top();
			p.pop(); k--;
		}
		cout << s << endl;	
	}
}
