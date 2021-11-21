#include<bits/stdc++.h>
using namespace std;

int n, a[100];
void daySo1(int a[], int n){
	int tong=0;
	if(n<1) return;
	int b[n-1];
	for(int i=0; i<n; i++){
		tong=a[i]+a[i+1];
		b[i]=tong;
	}
	cout<<"[";
	for(int i=0; i<n; i++){
		if(i==n-1) cout<<a[i]<<"]";
		else cout<<a[i]<<" ";
	} cout<<endl;
	
	daySo1(b,n-1);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		daySo1(a,n);
		
	}
}
