#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		long long a[n];
		for(long long i=0; i<n; i++) cin>>a[i];
		if(x<a[0]){
			for(int i=n-1; i>=1; i--){
				if(x==a[i]) cout<<i+1;
			} cout<<endl;
		}
		if(x>a[0]){
			for(int j=1; j<n; j++){
				if(x==a[j]) cout<<j+1;
			} cout<<endl;
		}
	}
}
