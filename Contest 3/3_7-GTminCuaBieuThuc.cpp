#include<bits/stdc++.h>
#define max 10000000
using namespace std;
long long A[max];
long long B[max];
long long n;
void nhap(){
	for(long long i=0; i<n; i++){
		cin>>A[i];
	}
	for(long long i=0; i<n; i++){
		cin>>B[i];
	}
}
int giatrimin(){	
	long long tong;
	tong=0;
	for(long long i=0; i<n; i++){
			tong+=A[i]*B[i];			
	}
	cout<<tong<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		nhap();
		sort(A,A+n);
		sort(B,B+n, greater<long long>());
//		for(long i=0; i<n; i++){
//		cout<<A[i]<<" ";
//		} cout<<endl;
//		for(long j=0; j<n; j++){
//			cout<<B[j]<<" ";
//		}
		giatrimin();
	}
	return 0;
}
