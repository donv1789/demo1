#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int a[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=0;
	cin>>t;
	for(int z=1; z<=t; z++){
		int n,m,p;
		cin>>n>>m>>p;
		for(int i=0; i<n; i++){
			if(i<p) cin>>a[i];
			else cin>>a[i+m];
		}
		for(int i=0; i<m; i++){
			cin>>a[p];
			p++;
		}
		cout<<"Test "<<z<<": "<<endl;
		for(int i=0; i<m+n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

