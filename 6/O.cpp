#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];

int main(){
	int n=0;
	cin>>n;
	for (int i=0; i<n; i++)
	 for (int j=0; j<n; j++) cin>>a[i][j];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++) if(a[i][j]) cout<<j+1<<" ";
		cout<<endl;
	} 
	return 0;
}

