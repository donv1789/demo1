#include<bits/stdc++.h>
using namespace std;

main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0; i<n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
