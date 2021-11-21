#include<bits/stdc++.h>
using namespace std;

main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n, greater<int>());
		for(int i=0; i<k; i++){
			cout<<a[i]<<" ";
		} cout<<endl;
	}
	return 0;
}
