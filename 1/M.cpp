#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

int f(int x, int y){
	if (x==0 && y==0) return 0;
	int a=x%3,b=y%2;
	if (a==0 && b==0) return f(x/3,y/2);
	if (a==1 && b==0) return f((x-1)/3, y/2)+1;
	if (a==2 && b==0) return f((x-2)/3, y/2);
	if (a==0 && b==1) return f(x/3, (y-1)/2)+1;
	if (a==1 && b==1) return f((x-1)/3, (y-1)/2)+2;
	if (a==2 && b==1) return f((x-2)/3, (y-1)/2)+1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
		int x,y;
		cin>>x>>y;
		cout<<f(x,y)<<endl;
	}
	return 0;
}

