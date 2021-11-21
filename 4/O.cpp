#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N+5], b[N+5];
stack <int> sl;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	sl.push(0);
	b[0]=1;
	for(int i=1; i<n; i++){
		while (!sl.empty() && a[sl.top()] <= a[i]) sl.pop();		
		if(sl.empty()) b[i]=i+1; 
		else b[i]=i-sl.top();
		sl.push(i);
	}
	for(int i=0; i<n; i++) cout<<b[i]<<" ";
	return 0;
}

