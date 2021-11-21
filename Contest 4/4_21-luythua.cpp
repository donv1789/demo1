#include<iostream>
using namespace std;
const int mod =1e9 + 7;
long long lt(long a,long b){
	if(b==0) return 1;
	long long x = lt(a,b/2);
	if(b%2==0) return (x*x)%mod;
	return a*(x*x%mod)%mod;
}
int main(){
	ios_base::sync_with_stdio(false);
	int a;
	long b;
	for(int i=0;i<19;i++){
		cin>>a>>b;
		if(a==0 && b==0) return 0;
		cout<<lt(a,b)<<endl;
	}
}