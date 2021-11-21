#include<iostream>
using namespace std;
#define vo_cuc 1000000007
int n,k,f[1001][1001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<=n;i++)f[i][0]=1;
		for(int i=1;i<=n;i++)
		 for(int j=1;j<=k;j++)
		  if(i==j)f[i][j]=1;
		  else if(j>i)f[i][j]=0;
		  else f[i][j]=(f[i-1][j-1]+f[i-1][j])%vo_cuc;
		cout<<f[n][k]<<endl;
	}
	return 0;
}
