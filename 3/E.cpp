#include<bits/stdc++.h>
using namespace std;
int be(char c[])
{
	int t=0;
	for (int i=0;i<strlen(c);i++)
	{
		if (c[i]=='6') t=t*10+(c[i]-'0')-1;
		else t=t*10+(c[i]-'0');
	}
	return t;
}
int lon(char c[])
{
	int t=0;
	for (int i=0;i<strlen(c);i++)
	{
		if (c[i]=='5') t=t*10+(c[i]-'0')+1;
		else t=t*10+(c[i]-'0');
	}
	return t;
}
int main()
{
	char a[9],b[9];
	int m,n,p,q;
	cin>>a>>b;
	m=be(a);
	n=be(b);
	p=lon(a);
	q=lon(b);
	cout<<m+n<<" "<<p+q;
}
