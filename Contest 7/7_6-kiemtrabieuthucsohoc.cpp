#include<bits/stdc++.h>
// idea: co du thua ngoac hay khong?
// no du thua khi:
//1.(a)
//2.((((a+b)))) giua cac ngoac khong co phep toan
using namespace std;
int main(){
	int t ; cin >> t;
	cin.ignore();
	while(t--){
		string s; bool ok ;
		getline(cin,s);
		stack<char> st;
		for(int i  = 0; i< s.size(); i++){
			if(s[i]==')'){
				ok=true;
				char top= st.top(); st.pop();
				while(top != '('){// chi om toan hang
					if(top == '*'|| top=='+' || top=='-' || top== '/') 
						ok=false ;
					top= st.top(); st.pop();// tim demphan tu cos dau ngoac
				}
				if(ok) break;// thua ngoac (((a)))
			
			}
			else st.push(s[i]);
			
		}
		if(ok) cout << "Yes" <<endl;
		else cout << "No" << endl;
	}
}
