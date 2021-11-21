#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,b,c;
		int m=n/4;
		int dau=1;
		for(int i=0;i<=m;i++){
			c=(n-4*i)/7;
			if(i*4+c*7==n&&dau==1){
				a=i;
				b=c;
				dau=0;
			}
		}
		if(dau==1){
			cout<<"-1";
			continue;
		}
		int d[a+b];
		for(int i=0;i<a+b;i++){
			if(i<a)cout<<"4";
			else cout<<"7";
		}
		cout<<endl;
	}
	return 0;
}

