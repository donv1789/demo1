#include<iostream>
using namespace std;
int n,ok=1,a[10][10],x[10];

void next_permutation(){
	int j=n-1;
	while(j>0&&x[j]>x[j+1]) j--;
	if(j==0) ok=0;
	else{
		int k=n;
		while(k>0&&x[j]>x[k]) k--;
		int t=x[j];
		x[j]=x[k];
		x[k]=t;
		int l=j+1;
		int s=n;
		while(l<=s){
			t=x[l];
			x[l]=x[s];
			x[s]=t;
			l++;
			s--;
		}
	}
}
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		ok=1;
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			x[i]=i;
		}
		long long kq=1e9*8;
		while(ok==1){
			long long v=0;
			for(int i=1;i<=n;++i){
				v+=a[i][x[i]];	
			}
			if(v<kq) kq=v;
			next_permutation();	
		}
		cout<<kq<<endl;
	}
	return 0;
}
