#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[10];
		a[0]=s[0] - '0';
		cout<<s[0];
		for(int i=1; i<s.length(); i++){
			a[i]= (s[i] - '0')^(a[i-1]);
			cout<<a[i];
		}
		cout<<endl;
	}
}
