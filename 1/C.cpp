#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
#include<bits/stdc++.h>
using namespace std;
int k,n,b[1000],OK=1;

void nextCombination(){
	int i = k;
	while ( i>0 && b[i] == n - k + i) i --; 
	if (i>0) { 
		b[i] = b[i] + 1;
		for (int j = i+1; j<=k; j++) b[j] = b[i] + j - i; 
	}
	else OK = 0; 
}

void solve(){
	cin>>n>>k;
	int a[41];
	for (int i=1; i<41; i++) a[i]=0;
	OK=1;
	for (int i=1; i<=k; i++){
		cin>>b[i];
		a[b[i]]++;
	} 
	nextCombination();
	if(OK==0) cout<<k<<endl;
	else{
		int d=0;
		for (int i=1; i<=k; i++) if(a[b[i]]==0) d++;
		cout<<d<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--) solve();
	return 0;
}

