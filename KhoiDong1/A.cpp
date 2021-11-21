#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	cin>>n;
	while(n){
		long long a,b;
		cin>>a>>b;
		long long c=a*b,d=__gcd(a,b);
		cout<<d<<" "<<c/d<<endl;
		n--;
	}
	return 0;
}

