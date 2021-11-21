#include<bits/stdc++.h>
using namespace std;
int a[10005];

void InterchangeSort(int n){
	int dem=0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++) if(a[j]<a[i]) swap(a[i],a[j]);
		dem++;
		cout<<"Buoc "<<dem<<": ";
		for(int k=0; k<n; k++) cout<<a[k]<<" ";
		cout<<endl;
	}
}

int main(){
	int n=0;
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	InterchangeSort(n);
	return 0;
}

