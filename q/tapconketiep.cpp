#include<iostream>
using namespace std;

int n,k, C[1001], Stop = 0;

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i = 1; i <= k; i++ ) cin>>C[i];
		
		int i = k;
		while(C[i] == n - k + i) i--;
		if(i>0){
			C[i]++;
			for( int j = i+1; j<=k; j++)
				C[j] = C[j -1] + 1;
		}else{
			for(int i=1; i<=k;i++) C[i]=i;
		}
		
		for(int i = 1; i<=k; i++) cout<<C[i]<<" ";
		cout<<endl;
	}	
}

