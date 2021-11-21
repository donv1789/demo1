#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

int kq[10005];
int k;
string a,b;

long long power(long long x, long long y)
{
	if (y==0) return 1;
	if (y==1) return x;
	long long temp=power(x,y/2); 
	if (y%2==0) return (temp*temp);
	else
	{
		temp=(temp*temp);
		return (x*temp);
	}
}

void solve(){
	long long x=0,y=0,sum=0;
	long long m=max(a.length(),b.length());
	for(int i=0; i<m; i++){
		if(i<a.length()) x+=(a[i]-'0')*power(k,a.length()-i-1);
		if(i<b.length()) y+=(b[i]-'0')*power(k,b.length()-i-1);
	}
//	cout<<x<<" "<<y<<endl;
	sum=x+y;
//	cout<<sum;
	int n=0;
	while(sum){
		kq[n]=sum%k;
		sum/=k;
		n++;
	} 
	for(int i=n-1; i>=0; i--) cout<<kq[i];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>k;
	if(k==10){
		int x,y;
		cin>>x>>y;
		cout<<x+y;
	}
	else{
		cin>>a>>b;
		solve();
	}
	return 0;
}

