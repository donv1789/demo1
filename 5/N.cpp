#include<bits/stdc++.h>
using namespace std;

void insertSort(int a[], int n){
	int pos, x;
	cout<<"Buoc 0: ";
	cout<<a[0];
	cout<<endl;
	for(int i=1; i<n; i++){
		x=a[i];
		pos=i-1; //Tim vi tri chen x
		while((pos>=0) && (a[pos]>=x)){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x; //Chen x vao day
		cout<<"Buoc "<<i<<": ";
		for(int z=0; z<=i; z++) cout<<a[z]<<" ";
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0; i<n; i++) cin>>a[i];
	insertSort(a,n);
	return 0;
}

