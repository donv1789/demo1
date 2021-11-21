#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long minl=1000000,minx=1000000,tongl=0,tongx=0;
	cin>>n;
	for(int i=0; i<n; i++){
		int l,x;
		cin>>l>>x;
		if (minl>l) minl=l;
		if (minx>x) minx=x;
		tongl+=l;
		tongx+=x;
	}
	tongl+=minx;
	tongx+=minl;
	cout<<max(tongl,tongx);
	return 0;
}

