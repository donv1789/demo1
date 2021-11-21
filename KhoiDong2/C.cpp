#include<bits/stdc++.h>
using namespace std;

int main(){
	int t=0;
	cin>>t;
	for(int x=1; x<=t; x++){
		int a[100][100],b[100][100],c[100][100];
		int n;
		cin >> n;
		for(int i = 0; i < n; i++)
		 for(int j = 0; j < n; j++){
		 	a[i][j]=0;
		 	b[j][i] =0;
		 	if(j<i+1) a[i][j]=j+1;
			b[j][i] = a[i][j];
		 }
	 	for(int i = 0; i < n; i++) 
	  	 for(int j = 0; j < n; j++){
	  	 		c[i][j]=0;
	  	 		for(int l = 0; l < n; l++) c[i][j] += a[i][l] * b[l][j];
		   } 
	   	cout<<"Test "<<x<<": "<<endl; 
	 	for(int i = 0; i < n; i++) {
	     	for(int j = 0; j < n; j++) cout << c[i][j] << " ";
	  		cout << endl;
	 	}
	}
	return 0;
}
