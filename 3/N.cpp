#include <bits/stdc++.h>
using namespace std;

int DP[25001];

int main()
{
	int n, C;
	cin>>C>>n;
	int a[101];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	DP[0]=1;
	for (int i=0; i<n; i++){
		for (int j=C; j>=a[i]; j--){
			if (DP[j]==0 && DP[j-a[i]]==1) DP[j]=1;
		}
	}
	for (int i=C; i>=0; i--){
		if (DP[i]){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
