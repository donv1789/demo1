#include<iostream>
#include <stack>

using namespace std;
int main(){
	stack<int> v;
	int t;
	cin>>t;
	while(t--){
		string l;
		cin>>l;
		int x;
		if(l=="PUSH"){
			cin>>x;	v.push(x);
		}
		else if(l=="POP"){
			if(!v.empty()){	v.pop();}
		}
		else if(l=="PRINT"){
			if(v.empty()) cout<<"NONE"<<endl;
			else {
				cout<<v.top();
				cout<<endl;
			}
		}
		
	}

}
