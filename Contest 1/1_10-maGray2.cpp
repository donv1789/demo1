#include<iostream>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string s;
		int a[10];
		cin>>s;
		a[0]=s[0];
		cout<<s[0];
		for(int i=1; i<s.length(); i++){
			a[i]=(s[i-1]-'0')^(s[i] - '0');
			cout<<a[i];
		}
		cout<<endl;
	}
}
