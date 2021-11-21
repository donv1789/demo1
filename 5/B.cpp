#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
queue <int> a;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int n;
			cin>>n;
			a.push(n);
		}
		if(s=="POP") if (!a.empty()) a.pop();
		if(s=="PRINTFRONT"){
			if (a.empty()) cout<<"NONE";
			else cout<<a.front();
			cout<<endl;
		}
	}
	return 0;
}

