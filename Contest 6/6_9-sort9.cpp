#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n,k,dem;
	cin>>t;
	while(t--){
		dem=0;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++){
			for(int j=n-1; j>i; j--){
				if(a[i]+a[j]==k){
					dem++;
				} 
			}
		} cout<<dem<<endl;
		
	}
	return 0;
}
