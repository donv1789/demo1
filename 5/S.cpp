#include <bits/stdc++.h>
#include <queue>
using namespace std;

const int nmax=100005;
int t, n, a[nmax], dem;
priority_queue <long long, vector<long long>, greater<long long> > p;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		dem=0;
		cin>>n;
		while(!p.empty())
		{
			p.pop();
		}
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1, a+1+n);
		for(int i=1;i<n;i++)
		{
			long long x=a[i+1]-a[i];
			p.push(x);
		}
		long long k=p.top();
		while(!p.empty() && k==p.top())
		{
			p.pop();
			dem++;
		}
		cout<<k<<" "<<dem<<endl;
	}
}

