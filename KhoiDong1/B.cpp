#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t){
		string s;
		cin>>s;
		if (s[0]==s[s.length()-1]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		t--;
	}
	return 0;
}

