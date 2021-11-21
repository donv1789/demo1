#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
long long b[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue <long long> a;
	long long n;
	cin>>n;
	for(long long i=0; i<n; i++){
		long long tmp;
		cin>>tmp;
		a.push(tmp);
	}
	for(long long i=0; i<n; i++){
		b[i]=a.top();
		a.pop();
	}
	for(long long i=n-1; i>=0; i--) cout<<b[i]<<" ";
	return 0;
}

