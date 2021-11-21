#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int tong_max, tong_min, xa, xb;
	tong_max=tong_min=a+b;
	int i=1;
	while(a||b){
		xa=a%10; xb=b%10;
		
		if(xa==5) tong_max+=i;
		if(xa==6) tong_min-=i;
		if(xb==5) tong_max+=i;
		if(xb==6) tong_min-=i;
		i=i*10;
		a=a/10;
		b=b/10;
	}
	cout<<tong_min<<" "<<tong_max;
}
