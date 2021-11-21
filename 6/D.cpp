#include <bits/stdc++.h>
using namespace std;

const int nmax=100005;
int n, k, a[nmax], b[nmax], res=0;

struct Arr
{
	int first;
	int second;
};

bool cmp(Arr a, Arr b)
{
	return a.first<b.first;
}

Arr c[nmax];

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		c[i].first=a[i]-b[i];
		c[i].second=a[i];
	}
	sort(c+1, c+n+1, cmp);
	for(int i=1;i<=k;i++)
		res+=c[i].second;
	for(int i=k+1;i<=n;i++)
		res+=c[i].second-c[i].first;
	cout<<res;
}

