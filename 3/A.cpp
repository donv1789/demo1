#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,t,a[10];
	a[0]=1000;
	a[1]=500;
	a[2]=200;
	a[3]=100;
	a[4]=50;
	a[5]=20;
	a[6]=10;	
	a[7]=5;
	a[8]=2;
	a[9]=1;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int j=0,d=0,tmp;
		cin>>t;
		while (t>0)
		{
			d+=t/a[j];
			tmp=t/a[j];
			t-=a[j]*tmp;
			j++;	
		}
		cout<<d<<endl;
	}
	return 0;
}

