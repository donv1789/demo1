#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;cin >> s;
		stack<long long> st;
		for(int i = s.size()-1; i>=0; i--){
			if(s[i]== '+'  ||s[i]== '-' ||s[i]== '*'  ||s[i]== '/'  || s[i]== '^'  ||s[i]== '%'){
				long long a= st.top(); st.pop();
				long long  b= st.top(); st.pop();
				long long tmp;
				if(s[i]== '+') tmp = a+b;
				else if(s[i]== '-') tmp= a-b;
				else if(s[i]== '*') tmp= a*b;
				else if(s[i]== '/') tmp= a/b;
				else if(s[i]== '%') tmp= a%b;
				else if(s[i]== '^'){
					tmp=a;
					for(int i= 0; i <b-1;  b++){
						tmp *= b;
					}
					
				}
				st.push(tmp);
			}
			else st.push((long long )(s[i]-'0'));
		}
		cout << st.top()<< endl;
	}
}
