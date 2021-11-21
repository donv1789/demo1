#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long n;
	cin >> n;
	priority_queue<long,vector<long>,greater<long> >a;
	long tmp;
	for (int i=0;i<n;i++)
	{
		cin >> tmp;
		a.push(tmp);
	}
	long res=0;
	while(a.size()>1)
	{
		res+=(a.top()%mod);
		res%=mod;
		long tmp=a.top()%mod;
		if(a.size()>1) a.pop();
		else break;
		res+=a.top()%mod;
		res%=mod;
		tmp+=a.top()%mod;
		tmp%=mod;
		if(a.size()>1) a.pop();
		else break;
		a.push(tmp);
	}
	cout << res;
}
