#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n) {
 	for (int i = 0; i < n - 1; i++) {
		int c=0;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				c=1;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if(c){
			cout<<"Buoc "<<i+1<<": ";
			for (int z=0; z<n; z++) cout<<arr[z]<<" ";
			cout<<endl;
		}
	}
}

int main(){
	int n=0;
	cin>>n;
	int a[n+5];
	for(int i=0; i<n; i++) cin>>a[i];
	BubbleSort(a,n);
	return 0;
}

