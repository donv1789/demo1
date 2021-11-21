#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
long long a[100005];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0; i<n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

