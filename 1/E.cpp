#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int k,n,a[1000][1000],b[1000],ok=1,dem=0,kq[1000][1000];

void sinhHoanVi(){
	int i=n-1;
	while (i>0 && b[i]>b[i+1]) i--;
	if (i>0){
		int j=n;
		while (b[i]>b[j]) j--;
		swap (b[i],b[j]);
		sort(b+i+1,b+n+1);
	}
	else ok=0;
}

void check(){
	int sum=0;
	for(int i=1; i<=n; i++) sum+=a[i][b[i]];
	if (sum == k){
		for(int i=1; i<=n; i++) kq[dem][i]=b[i];
		dem++;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>k;
	for (int i=1; i<=n; i++)
	 for (int j=1; j<=n; j++) cin>>a[i][j];
	for(int i=1; i<=n; i++) b[i]=i;
	while (ok){
		check();
		sinhHoanVi();
	}
	cout<<dem<<endl;
	if(dem>0){
		for(int i=0; i<dem; i++){
			for(int j=1; j<=n; j++) cout<<kq[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}
