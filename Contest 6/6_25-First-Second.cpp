#include<bits/stdc++.h>
using namespace std;
 main(){
 	int t;
 	long n;
 	cin>>t;
 	while(t--){
 		cin>>n;
 		long a[n];
 		for(long i=0; i<n; i++) cin>>a[i];
 		sort(a,a+n);
 		if(a[1]>a[0]) cout<<a[0]<<" "<<a[1]<<endl;
 		else cout<<"-1"<<endl;
	 }
	 return 0;
 }
