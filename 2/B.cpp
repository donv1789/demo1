#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=0;
	cin>>t;
	while(t--){
		int n,k,c=0;
		cin>>n>>k;
		for (int i=1; i<=n; i++) cin>>a[i];
		int l=1, r=n;
		while (l <= r) {
			int m = (l + r) / 2;
			if (k == a[m]){
				cout<<m<<endl;
				c=1;
				break;	
			} 
			else if (k < a[m]) 
				r = m - 1;
			else if (k > a[m]) 
				l = m + 1;	
		} 
		if(c == 0) cout<<"NO"<<endl;
	}
	return 0;
}

