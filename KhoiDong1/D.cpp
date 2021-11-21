#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t){
		int n,c=1;
		cin>>n;
		int a[n+1];	
		for (int i=1; i<=n; i++ ) cin>>a[i];
		for (int i=1; i<=n/2; i++){
			if (a[i]!=a[n-i+1]){
				c=0;
				break;
			}
		}
		if (c) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		t--;
	}
	return 0;
}

