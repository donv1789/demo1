#include<iostream>
using namespace std;
int f[1001][1001],n,m;
int main()
{
	int t; cin>>t;
	while(t--){
		string x,y;
	cin>>x>>y;
	n=x.size();
	m=y.size();
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=m;j++)
	  if(x[i-1]==y[j-1])	f[i][j]=f[i-1][j-1]+1;
	  else f[i][j]=max(f[i-1][j],f[i][j-1]);
	cout<<f[n][m]<<endl;
	}
	
	return 0;
}
