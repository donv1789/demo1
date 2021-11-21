#include<iostream>
using namespace std;
long long tong(long long n,long long l,long long r)
{
	if(l>r)return 0;
	long long d=1;
	while(d<=n)d*=2;
	d/=2;
    if(l<=d&&d<=r)return n%2+tong(n/2,l,d-1)+tong(n/2,1,r-d);
	else if(l>d) return tong(n/2,l-d,r-d);
	else return tong(n/2,l,r); 
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long n,l,r;
		cin>>n>>l>>r;
		cout<<tong(n,l,r)<<endl;
	}
	return 0;
}
