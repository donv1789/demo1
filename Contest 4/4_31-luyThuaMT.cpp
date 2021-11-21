#include<iostream>
using namespace std;
const long long Max=1e9 + 7;
struct matran{
	long long  m[10][10];
};
int n,k;
matran nhan(matran a,matran b){
	matran c;
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	  {
	 	c.m[i][j]=0;
	 	for(int p=0;p<n;p++)
	 	  c.m[i][j]=(c.m[i][j]+(a.m[i][p]*b.m[p][j])%Max)%Max;
	  }
	return c; 
}
matran luyThua(int n,matran a)
{
	if(n==1||n==0) return a;
	matran b=luyThua(n/2,a);
	if(n%2==0) return nhan(b,b);
	else return nhan(a,nhan(b,b));
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    cin>>n>>k;
		matran a,b;
	    for(int i=0;i<n;i++)
	     	for(int j=0;j<n;j++)
	      		cin>>a.m[i][j];
	    
		b=luyThua(k,a);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
	      		cout<<b.m[i][j]<<" ";
		cout<<endl;
		}
	}
	return 0;
}
