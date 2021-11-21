#include<bits/stdc++.h>
using namespace std;

int main(){
	int u;
    cin >> u;
    for (int z=1; z<=u; z++){
        int n;
		cin>>n;
        long long gt=n*n, a[n][n];
        int d=0, hang=n-1, cot=n-1;
		while(d<=n/2){
			for(int i=d;i<=cot;i++) a[d][i]=gt--;
			for(int i=d+1;i<=hang;i++) a[i][cot]=gt--;
			for(int i=cot-1;i>=d;i--) a[hang][i]=gt--;
			for(int i=hang-1;i>d;i--) a[i][d]=gt--;
			d++; hang--; cot--;
		}
        cout<<"Test "<<z<<":"<<endl;
		for (int i=0; i<n; i++){
         	for (int j=0; j<n; j++) cout<<a[i][j]<<" ";
        	cout<<endl;
		}
    }
	return 0;
}

