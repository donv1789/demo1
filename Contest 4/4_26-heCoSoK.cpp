#include<iostream>
using namespace std;
int k;
string a,b;
void tong(int l,int r){
	if(l==r){
		int d=a[l]-'0'+b[l]-'0';
		a[l]=d%k+'0';
		a[l-1]+=d/k;
		return;
	}
	int m=(l+r)/2;
	tong(m+1,r);
	tong(l,m);
}
int main(){
	cin>>k>>a>>b;
	if(a.size()<b.size()){
		string temp=a;
		a=b;
		b=temp;
	}
	a="0"+a;
	while(b.size()!=a.size())
		b="0"+b;
	tong(0,a.size()-1);
	while(a[0]=='0'&&a[1]!='\0') a.erase(0,1);
	cout<<a;
	return 0;
}
