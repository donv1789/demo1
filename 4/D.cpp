#include<bits/stdc++.h>
using namespace std;

int priority(char x){
	if(x=='(') return 0;
	if(x=='+'||x=='-') return 1;
	if(x=='*'||x=='/'||x=='%') return 2;
	if(x=='^') return 3;
	return 3;
}

void IntoPost(string a){
	stack<char> s;
	string postfix="";
	int i=0;
	while(i<a.length()){
		char c=a.at(i);
		if(c!=' '){
			if(isalpha(c)) postfix+=c;
			else{
				cout<<postfix;
				postfix="";
				if(c=='(') s.push(c);
				else{
					if(c==')'){
						while(s.top()!='('){
							cout<<s.top();
							s.pop();
						}
						s.pop();
					}
					else{
						while(s.empty()==false && priority(c)<=priority(s.top())){
							cout<<s.top();
							s.pop();
						}
						s.push(c);
					}
				}
			}
		}
		i++;
	}
	if(postfix!="") cout<<postfix;
	while(s.empty()==false){
		cout<<s.top();
		s.pop();
	}
	cout<<endl;
}

int main(){
	int numberTest;
	cin>>numberTest;
	for(int i=0;i<numberTest;i++){
		cin.ignore();
		string infix;
		cin>>infix;
		IntoPost(infix);
	}
	return 0;
}
