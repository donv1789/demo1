#include<iostream>
using namespace std;
const long long Max=1E9+7;
struct matran{
	long long  m[2][2];
};
matran nhan(matran a,matran b)
{
	matran c;
	for(int i=0;i<2;i++)
	  for(int j=0;j<2;j++)
	  {
	 	c.m[i][j]=0;
	 	for(int k=0;k<2;k++)
	 	  c.m[i][j]=(c.m[i][j]+(a.m[i][k]*b.m[k][j])%Max)%Max;
	  }
	return c; 
}
matran powp(int n,matran a)
{
	if(n==1||n==0)return a;
	matran b=powp(n/2,a);
	if(n%2==0) return nhan(b,b);
	else return nhan(a,nhan(b,b));
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
		matran a,b;
	    a.m[0][0]=0;
		a.m[1][0]=a.m[0][1]=a.m[1][1]=1;
		b=powp(n-1,a);
		cout<<b.m[1][1]<<endl;
	}
	return 0;
}
