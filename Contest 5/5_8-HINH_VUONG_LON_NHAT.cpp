#include<iostream>
using namespace std;
int n,m,a[501][501],f[501][501],Max;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		 	for(int j=1;j<=m;j++){
			 	cin>>a[i][j];
			 	if(a[i][j])f[i][j]=1;
			 	else f[i][j]=0;	
		  	} 
		Max=0;
		for(int i=2;i<=n;i++)
		 	for(int j=2;j<=m;j++){
		  		if(a[i][j]&&a[i-1][j-1]&&a[i-1][j]&&a[i][j-1]){
		  	   		f[i][j]=min(f[i-1][j],min(f[i][j-1],f[i-1][j-1]))+1;
			   		if(Max<f[i][j])Max=f[i][j];	
			 	}	
		  	}
		cout<<Max<<endl;
	}
	return 0;
}
