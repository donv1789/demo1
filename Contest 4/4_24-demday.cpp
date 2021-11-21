#include<iostream>
using namespace std;
#define Max 123456789
int demday(long long n)
{
	if(n==0) return 1;
	long long x=demday(n/2);
	if(n%2==0) return (x*x)%Max;
	else {
		return (((x*x)%Max)*2)%Max;
	}	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<demday(n-1)<<endl;
	}
	return 0;
}
