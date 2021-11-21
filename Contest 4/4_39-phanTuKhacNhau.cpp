#include<iostream>
#define ll long long
#define max 100000
using namespace std;

ll a[max], b[max];
ll n;

void nhap(){
	for(ll i=1; i<=n; i++){
		cin>>a[i];
	}
	for(ll i=1; i<=n-1; i++){
		cin>>b[i];
	}
}
long vitri(){
	if(a[n/2]==b[n/2]){
		for(ll i=n/2; i<=n-1; i++){
			if(a[i] != b[i])
				return i;
		}
	}
	else if(a[n/2]!=b[n/2]){
		for(ll i=1; i<=n/2; i++){
			if(a[i] != b[i])
				return i;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		nhap();
		cout<<vitri()<<endl;
	}
	return 0;
}
