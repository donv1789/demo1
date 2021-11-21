#include<bits/stdc++.h>
using namespace std;
int n,cp=0,a[100][100],xet[100],Cmin,g=1000000,x[100],kq,gk;

void init(){
	cin>>n;	// n = so thanh pho
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	Cmin=a[1][2];
	for (int i=1; i<=n; i++){			// tim Cmin
		for (int j=1; j<=n; j++){
			if(Cmin>a[i][j] && a[i][j]!=0) Cmin=a[i][j];
		}
	}
	x[1]=1;
}

void nhanhCan(int k){
	for (int j=2; j<=n; j++){
		if(xet[j]==0){
			x[k]=j;
			xet[j]++;
			cp+=a[x[k-1]][x[k]];
			gk=cp+(n-k+1)*Cmin;
			if (k==n && gk<g){
				g=gk;
				kq=cp+a[x[k]][1];
			}
			else if (gk<g) nhanhCan(k+1);
			cp-=a[x[k-1]][x[k]];
			xet[j]--;
		}
	}
}

int main(){
	init();
	nhanhCan(2);
	cout<<kq;
}
/*
4
0 20 35 10
20 0 90 50
35 90 0 12
10 50 12 0
*/
