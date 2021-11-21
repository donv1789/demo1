#include<iostream>
using namespace std;
const long Max = 1e9 + 7;

int luythua(int n,long k){
	if(k==1) return n;
	long x=luythua(n,k/2); // VD n=2, k=3 thi k/2=1 va x=2
	if(k%2==0) return (x*x)%Max;
	return ((n*x)%Max*x)%Max;// 3%2=1.tra ve 2*2*2=8
}

int main(){
	ios_base::sync_with_stdio(false);

	for(int i=0 ; i<20;i++){
		int a;
		long b;
		cin>>a>>b;
		if(a==0 && b==0)return 0;
		cout<<luythua(a,b)<<endl;
	}
}
