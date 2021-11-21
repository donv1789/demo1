#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int a[N],b[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0; i<n; i++){
		if(a[i]>b[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}

