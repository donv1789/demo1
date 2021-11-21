#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
	 	int min=i;
	 	for(int j=i+1;j<n;j++)
	 		if(a[min]>a[j])
	 			min=j;
	 	swap(a[i], a[min]);
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;j++) cout<<a[j]<<" ";
		cout<<endl;
	}
	return 0;
}
