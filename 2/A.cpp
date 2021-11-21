#include<bits/stdc++.h>
using namespace std;
const int base = 1e9 + 7;

long long power(long long a, long long b)
{
	if (b==0) return 1;
	if (b==1) return a;
	long long temp=power(a,b/2) % base;
	if (b%2==0) return (temp*temp)%base;
	else
	{
		temp=(temp*temp)%base;
		return (a*temp)%base;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	long long n,m;
	while (t--)
	{
		cin>>n>>m;
		cout<<power(n,m)<<endl;
	}
	return 0;
}

