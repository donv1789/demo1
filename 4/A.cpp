#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int a[205];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int i=0;
	while (cin>>s){
		if(s=="push"){
			cin>>a[i];
			i++;
		}
		if(s=="pop") i--;
		if(s=="show"){
			if (i == 0) cout<<"empty";
			else for(int j=0; j<i; j++) cout<<a[j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

