#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
void in(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	} cout<<endl;
}
bool check(){
	int dem=0;
	for(int i=1; i<=n; i++){
		if(a[i]==1) dem++;	
	}
	if(dem==k) return true;
	else return false;
}
void demBit1(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			if(check()==true){
				in();
			}
		}
		else
			demBit1(i+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		demBit1(1);
	}
}
