#include<iostream>
using namespace std;
int tim(int n,int k,int a[],int b[])
{
	int i=k,dem=0;
	while(i&&a[i]==n-k+i) i--;
	if(!i)return k;
	 a[i]++;
	for(int j=i+1;j<=k;j++)
	  a[j]=a[i]+j-i;
	for(int j=1;j<=k;j++)
	{
		for(int p=1;p<=k;p++)
		{
			if(a[j]==b[p])
			{
				dem++;
				break;
			}
		}
	}
	return k-dem;
}
int main()
{
//	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
	 int n,k,a[40],b[40];
	 cin>>n>>k;
	 for(int i=1;i<=k;i++)
	  {
	   cin>>a[i];
	   b[i]=a[i];
      }
	 cout<<tim(n,k,a,b)<<endl;
	}
	return 0;
}
