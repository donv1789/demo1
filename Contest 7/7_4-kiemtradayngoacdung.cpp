// kiem tra day ngoac dung
#include<bits/stdc++.h>
using namespace std ;
bool check(string s){

	stack <char> t;
	for(int i = 0; i< s.length(); i++){
		char c= s[i];
		if(c == '{' || c== '[' || c=='('){
			t.push(c);
		}
		else{
			if(! t.empty() && c==']' && t.top()=='[') t.pop();
			else if(! t.empty() && c=='}' && t.top()=='{') t.pop();
			else if(! t.empty() && c==')' && t.top()=='(') t.pop();
			else return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin >> t ;
	while(t--){
		string s ;
		cin >> s;
		if(check(s)) cout <<"YES" <<endl;
		else cout << "NO" << endl;
	}
	return 0;
}
