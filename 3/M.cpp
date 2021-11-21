#include <bits/stdc++.h>
using namespace std;
int dd[15]={0}, x[15];
int n, smin, cost;
string a[15];
int count(string a, string b){
	int fa[26]={0};
	int fb[26]={0};
	int cnt=0;
	for(int i=0;i<a.length();i++) ++fa[a[i]-'A'];
	for(int i=0;i<b.length();i++) ++fb[b[i]-'A'];
	for(int i=0; i<26;i++)
		if(fa[i] && fb[i]) ++cnt;
	return cnt;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(dd[j]==0){
			dd[j]=1;
			x[i]=j;
			cost+=count(a[x[i-1]],a[x[i]]);
			if (cost<smin){
				if(i==n){
					if(cost<smin) smin=cost;
				}
				else Try(i+1);
			}
			cost -= count(a[x[i-1]],a[x[i]]);
			dd[j]=0;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	a[0]="";
	x[0]=0;
	cost=0;
	smin=INT_MAX;
	Try(1);
	cout<<smin;
	return 0;
}
