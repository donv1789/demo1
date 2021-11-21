#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	string s;
	cin>>s;
	stack <char> st, res;
	for(int i=0; s[i]; i++){
		if( st.empty() || st.top() != s[i] ) st.push(s[i]);
		else st.pop();
	}
	if( st.empty() ) cout<<"Empty String";
	while( !st.empty() ){
		res.push(st.top());
		st.pop();
	}
	while( !res.empty() ){
		cout<<res.top();
		res.pop();
	}
}
