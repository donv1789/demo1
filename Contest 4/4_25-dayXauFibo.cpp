#include<iostream>
using namespace std;
long long F[93];
char search(int n,long long k)
{
	if(n==1)	return 'A';
	if(n==2)	return 'B';
	if(k>F[n-2]) 
		return search(n-1,k-F[n-2]);
	else return search(n-2,k);
}
int main()
{
	F[1]=1;
	for(int i=2;i<93;i++){
		F[i]=F[i-2]+F[i-1];
	}	 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long k;
		cin>>n>>k;
		cout<<search(n,k)<<endl;
	}
	return 0;
}
