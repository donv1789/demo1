#include <bits/stdc++.h>
using namespace std;
 
long long n,res,a[]={2,3,5,7,11,13,17,19,23,29};
 
void Init()
{
    cin>>n;
    res=1000000000000000000;
}
 
long long mu(long long i, long long k)
{
    if(k==1) return a[i];
    long long f=mu(i,k/2);
    if (k%2==0) return f*f;
    return f*f*a[i];
}
 
void Try(long long n, long long i, long long x)
{
    if(n==1)
    {
        res=min(res,x);
        return;
    }
    for (long long k=2;k<=n;k++)
    {
        if(n%k==0)
        {
            long long y=mu(i,k-1);
            if(y>0 && x<res/y)
            {
                x=x*y;
                Try(n/k,i+1,x);
                x=x/y;
            }
        }
    }
}
void Solve()
{
    Try(n,0,1);
    cout<<res<<endl;
}
 
int main()
{
	int t;
	cin>>t;
	while (t--){
		Init();
		Solve();
	}
}
