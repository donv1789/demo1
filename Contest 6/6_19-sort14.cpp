#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;//khoang [l,r] = [a0,a(n-1)]
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
//		for(int i=0; i<n; i++) cout<<a[i]<<" ";
//		cout<<endl;
		int x=0,y=0;
		for(int i=a[0]; i<=a[n-1]; i++){
			x++;
		}
		for(int i=0; i<n; i++){
			if(a[i]==a[i+1]) y++;
		}
		cout<<x-n+y<<endl;
	}
	return 0;
}
