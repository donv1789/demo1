#include<bits/stdc++.h>
#define max 100000
using namespace std;
const long long modu=1e9+7;
long A[max];
int n;
void nhap(){
	for(long i=0; i<n; i++){
		cin>>A[i];
	}
}
void timmax(long sum){
	sum=0;
	for(long i=0; i<n; i++){
		sum=(sum+(A[i]*i)%modu)%modu;
	}
	cout<<sum%modu<<endl;
}
int main(){
	long sum;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		nhap();
		sort(A,A+n);
//		for(long i=0; i<n; i++){
//			cout<<A[i]<<" ";
//		}
		timmax(sum);
	}
}
