#include<iostream>
using namespace std;
main(){
	int t;
	long n;
	cin>>t;
	while(t--){
		cin>>n;
		long a[n-1];
		for(long i=1; i<n; i++) cin>>a[i];
		if(n/2==a[n/2]){
			for(int i=n/2+1; i<n; i++){
				if(i!=a[i]) {
					
					cout<<i<<" ";
					a[i]-=1; i++;
					break;
				}
			} cout<<endl;
		}
		else if(n/2<a[n/2]){
			for(int i=1; i<=n/2; i++){
				if(i!=a[i]) {
				
					cout<<i<<" ";
					a[i]-=1; i++;
					break;
				}
			} cout<<endl;
		}
	}
	return 0;
}
