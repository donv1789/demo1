#include <bits/stdc++.h>
using namespace std;
const int m = 100;
int n,k;
int a[m],b[m];
int dem = 0;
int tong = 0 ;
// ham nhap
void nhap(){
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
}
// ham hienthi
void hienthi(int y){
	cout<<"[";
	for(int i = 1;i<y;i++){
		cout<<b[i]<<" ";
	}
	cout<<b[y]<<"]"<<" ";
}
void Try(int x,int y,int z){
	for(int i = z+1;i<=n;i++){
		tong = a[i]+x;
		b[y]=a[i];
		if(tong == k){
			dem++;
			hienthi(y);
		}
		else{
			Try(a[i]+x,y+1,i);
		}
	}
}
int main(){
	int t,x,y,z;
	cin>>t;
	while(t--){
		x = 0, y = 1,z=0;
		cin>>n>>k;
		nhap();
		sort(a+1,a+1+n);
		Try(x,y,z);
		if(dem==0){
			cout<<-1;
		}
		dem = 0;
		cout<<endl;
	}
   
	return 0;
}
