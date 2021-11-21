#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

string XuLyTrungTo(string d){
	string tmp;
	stack <char> TT;
//	while(!TT.empty()) TT.pop();
	for (int i=0; i<=d.length(); i++){
		if (d[i] >= 'a' && d[i] <= 'z') tmp += d[i];
		else if (d[i] == '(') TT.push(d[i]);
		else if (d[i] == ')'){
			while (TT.top() != '('){
				if(TT.top()!='('){
					tmp += TT.top();
					TT.pop();
				}
			}
			TT.pop();
		}
		else if(d[i] == '^') TT.push(d[i]);	
		else if(d[i] == '*' || d[i] == '/' || d[i] == '%'){
			while (TT.top() == '^'){
				tmp += TT.top();
				TT.pop();
			}
			TT.push(d[i]);	
		}
		else if(d[i] == '+' || d[i] == '-'){
			while (!TT.empty() && TT.top()!='('){
				tmp += TT.top();
				TT.pop();
			}
			TT.push(d[i]);
		}
	}
	while (!TT.empty()){
		tmp += TT.top();
		TT.pop();
	}
	return tmp;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<XuLyTrungTo(s)<<endl;
	}
	return 0;
}

