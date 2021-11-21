#include<iostream>
using namespace std;
#define vo_cuc 100000000
int a[1001],f[1001][51],n,k;
int main()
{
	int t; cin>>t;
	while(t--){
		long long temp=0;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
		   cin>>a[i];
		   temp=(temp+a[i])%k;	
		}
		f[0][0]=0;
		for(int i=1;i<k;i++) f[0][i]=vo_cuc;
		for(int i=1;i<=n;i++)
		 	for(int j=0;j<k;j++)
		  		f[i][j]=min(f[i-1][j],f[i-1][((j-a[i])%k+k)%k]+1);
		cout<<n-f[n][temp%k]<<endl;
	}
	
	return 0;
}
