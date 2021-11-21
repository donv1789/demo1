#include<bits/stdc++.h>
using namespace std;
string phangoac(string s){
	stack<int> st;// LUU vtri cua mo ngoac
		for(int i = 0; i < s.size(); i++){
			if(s[i]=='(') st.push(i);
			else if(s[i]==')'){
				if(s.size()>0 ){
					int top= st.top(); st.pop();// xoa (
					if(top==0) continue ;// mo ngoac dau tien
					else if(s[top-1]=='+') continue ;
					else if(s[top-1]=='-'){
						for(int j=top; j <=i ; j++){// tu ( den )
							if(s[j]=='+') s[j]='-';
							else if(s[j]=='-') s[j]='+';
						}
					}
					
				}
			}
		}
		string str="";
		for(int i= 0; i <s.size(); i++){
			if(s[i]!= '(' && s[i]!=')') str=str+s[i];
		}
		return str;
}
int main(){
	int t; cin >> t ;
	cin.ignore();
	while(t--){
		string s1,s2;
		cin >> s1 >>s2 ;
		s1=phangoac(s1);
		s2=phangoac(s2);
		if(s1==s2) cout <<"YES";
		else cout << "NO";
		cout << endl;
	}
}
