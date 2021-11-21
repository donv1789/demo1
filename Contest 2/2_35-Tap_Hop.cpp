#include<iostream>
using namespace std;
int n,k,s,dem,temp;
void tohop(int i,int a)
{
	for(int j=a+1;j<=n-k+i+1;j++)
	{
		temp+=j;
		int b=j;
		if(i==k-1)
		{
			if(temp==s)dem++;
		}
		else tohop(i+1,b);
		temp-=j;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	while(1)
	{
		cin>>n>>k>>s;
		if(n==0&&k==0&&s==0)break;
		dem=temp=0;
		tohop(0,0);
		cout<<dem<<endl;
	}
	return 0;
}
