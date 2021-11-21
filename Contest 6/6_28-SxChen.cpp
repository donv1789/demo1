#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n,a[100],b[100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		if(i==0) b[i]=a[i];
		else{
			int j=0;
			while(j<i && b[j]<=a[i]) j++;
			for(int k=i;k>j;k--)
				b[k]=b[k-1];
			b[j]=a[i]; 
		}
		cout<<"Buoc "<<i<<": ";
		for(int j=0;j<=i;j++)
		  cout<<b[j]<<" ";
		cout<<endl;
	}
	return 0;
}
