#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n;
	long x;
	cin>>t;
	while(t--){
		int dem=0;
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++){
			if(a[i]==x) dem++;
		}
		if(dem==0) cout<<"-1"<<endl;
		else cout<<dem<<endl;
	}
	return 0;
}
