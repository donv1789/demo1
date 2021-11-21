#include<iostream>
using namespace std;
int main(){
	int m,n,f[500][500],t,a;
    cin>>t;
    while(t--){
    	cin>>n>>m;
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			cin>>a;
    			if(!i&&!j)f[i][j]=a;
    			else if(!i)f[i][j]=f[i][j-1]+a;
    			else if(!j)f[i][j]=f[i-1][j]+a;
    			else f[i][j]=min(f[i][j-1],min(f[i-1][j-1],f[i-1][j]))+a;
			}
		}
		cout<<f[n-1][m-1]<<endl;
	}
	return 0;
}
