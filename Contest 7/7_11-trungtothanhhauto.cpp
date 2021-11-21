#include<bits/stdc++.h>
using namespace std;
int degree(char c){
	if( c== '^') return 5;
	if(c=='*'|| c=='/') return 4;
	if(c=='+'|| c=='-') return 3;
	return 2;// ()
	
}
void infixtopos(){
	string s, res="";
	cin >> s;
	stack <char> st;// luu dau
	for(int i = 0 ; i< s.size(); i++){
		if(s[i] >='A' && s[i] <= 'Z') res= res+s[i];// in ky tu
		else if(s[i] >= 'a' && s[i] <='z') res=res+s[i];
		else if(s[i]== '(') st.push(s[i]);// them vao stack
		else if(s[i]== ')'){
			while (st.size() &&  st.top() != '('){// lay het phan tu , gap ) thi dung
				res= res + st.top();
				st.pop();
			}
			st.pop();// xoa ngoac
		} 
		else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
			while (st.size() && degree(st.top()) >= degree(s[i])){// do uu tie
				res = res+st.top();// -/ ^+  s[i
				st.pop();
			}
			st.push(s[i]); 
		}
	}
	
	while(st.size() ){
		if(st.top() != '(') res =res+st.top();
		st.pop();
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t ;
	while(t--){
		infixtopos();
	}
}
