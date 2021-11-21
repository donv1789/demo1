#include<bits/stdc++.h>
long long mod=1e9 +7;
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		long long s;
		priority_queue<long long, vector<long long>, greater<long long> > a;
		for(int i=0; i<n; i++){
			cin>>s;
			a.push(s);
		}
		long long sum=0;
		while(a.size()>1){
			long long x=a.top(); 
			a.pop();
			
			long long y=a.top();
			a.pop();
			long long k=(x+y)%mod;
			a.push(k);
			sum=(sum+k)%mod;
		}
		cout<<sum<<endl;
	}
}

