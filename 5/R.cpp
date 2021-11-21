#include <bits/stdc++.h>
using namespace std;

const int nmax=100005;
int t, n, a[nmax],b[nmax];

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1, b+n+1);
		int sv1=0, sv2=0;
		for(int i=1;i<=n;i++)
			if(b[i]!=a[i])
				sv1=i;
		for(int i=n;i>=1;i--)
			if(b[i]!=a[i])
				sv2=i;
		if((sv1-sv2)!=0) cout<<sv1-sv2+1<<endl;
		else cout<<"YES";
	}
}

