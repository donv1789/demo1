#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	m=n;
	int a[n][m];
	for (int i=0; i<n; i++)	
	 for (int j=0; j<m; j++) cin>>a[i][j];
	int t;
	cin>>t;
	while(t--){
		int h,c;
		cin>>h>>c;
		for(int i=h;i<n-1;i++)
		 for(int j=0;j<m;j++)
		 {
		 	a[i][j]=a[i+1][j];
		 }
		n--;
		for(int i=0;i<n;i++)
 		 for(int j=c;j<m-1;j++)
 	 	 {
 			a[i][j]=a[i][j+1];
 		 }
 		m--;
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}	
	return 0;
}

