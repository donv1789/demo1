#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
int check[20]={0};

void in(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	} cout<<" ";
}

int hoanVi(int i){
	for(int j=n; j>=1; j--){
		if(!check[j]){
			a[i]=j;
			check[j]=1;
			if(i==n){
				in();
			}
			else hoanVi(i+1);
			check[j]=0;
		}	
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		hoanVi(1);
		cout<<endl;
	}
}
