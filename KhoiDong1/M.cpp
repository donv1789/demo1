#include<bits/stdc++.h>
using namespace std;

bool tang(string a) {
	for(int i=1; i<a.size()-1; i++) {
		if(a[i-1]>a[i]) return false; 
	}
	return true;
}
bool giam(string a) {
	for(int i=1; i<a.size()-1; i++) {
		if(a[i-1]<a[i]) return false; 
	}
	return true;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--) {
		string s;
		cin >> s;
		if(tang(s) || giam(s)) 
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
