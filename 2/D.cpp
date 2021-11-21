#include<iostream>
#define mod 123456789
using namespace std;
long long mu(long long n)
{
    if(n==0)return 1;
    if(n==1)return 2;
    long long m=mu(n/2)%mod;
    if(n%2==0) return (m*m)%mod;
    return ((m%mod)*(m%mod)*2)%mod;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n==0)
		cout<<"1";
		else
		cout<<mu(n-1)<<endl;
	}
}


