#include<iostream>
using namespace std;
int main()
{
	int n,a[1005],f[1005],Max=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	 cin>>a[i];
	for(int i=1;i<=n;i++)
	 {
	 	f[i]=1;
	 	for(int j=0;j<i;j++)
	 	 if(a[j]<a[i])f[i]=max(f[i],f[j]+1);
	 	Max=max(Max,f[i]);
	 }
	cout<<Max;
	return 0;
}
