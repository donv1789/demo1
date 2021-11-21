#include<iostream>
#include<cmath>
using namespace std;
int p[9]={2,3,5,7,11,13,17,19,23};
long long res;
void tim(int n,long long x,long long i)
{
	if(n==1)
	{
	 res=min(res,x);
	 return;	
	}
    for(int k=2;k<=n;k++)
	 {
		if(n%k==0)
		{
			long long y=pow(p[i],k-1);
		    if(x*y<=1000000000000000000&&x*y>0)
		    {
		     x*=y;
			 tim(n/k,x,i+1);
			 x/=y;
			}
		}
	 }
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
    while(t--)
	{
		int n;
		cin>>n;
		res=1000000000000000000;
		tim(n,1,0);
		cout<<res<<endl;
	}
	return 0;
}
