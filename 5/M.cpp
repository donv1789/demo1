#include<bits/stdc++.h>
using namespace std;
int a[10005];

void SelectionSort(int n){
	int vtmin, dem=0;
	for(int i=0; i<n-1; i++){
		vtmin=i;
		for(int j=i+1; j<n; j++) if(a[j]<a[vtmin]) vtmin=j;
		swap(a[i],a[vtmin]);
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
	SelectionSort(n);
	return 0;
}

