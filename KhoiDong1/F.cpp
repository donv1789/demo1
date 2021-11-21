#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int j=1; j<=t; j++ ){
		long long n,k,i,d;
		cin>>n;
		cout<<"Test "<<j<<": ";
		k=sqrt(n);
		i=2;
		while (n>1 && i<=k)
		{
			if (n%i==0)
			{
				d=0;
				while (n%i==0)
				{
					d++;
					n/=i;
				}
				cout<<i<<"("<<d<<")"<<" ";
			}
			i++;
		}
		if (n>1) cout<<n<<"(1)";
		cout<<endl;
	}
	return 0;
}

