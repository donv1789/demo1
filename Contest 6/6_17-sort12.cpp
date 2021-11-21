#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	long long m,n;
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long a[n],b[m];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<m; i++) cin>>b[i];
		sort(a,a+n); // sx tang dan
		sort(b,b+n);
//		for(int i=0; i<n; i++) cout<<a[i]<<" ";
//		cout<<endl;
//		for(int i=0; i<m; i++) cout<<b[i]<<" ";
//		cout<<endl;
		cout<<a[n-1]*b[0]<<endl;
	}
	return 0;
}
