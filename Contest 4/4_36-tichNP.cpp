#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		long long so1=0, so2=0;
		long n1=s1.length();
		long n2=s2.length();
		for(int i=0; i<n1; i++){
			if(s1[i]=='1')
				so1+=pow(2,n1-i-1);
		}
		for(int i=0; i<n2; i++){
			if(s2[i]=='1')
				so2+=pow(2,n2-i-1);
		}
		cout<<so1*so2<<endl;
	}
}
