#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
deque <int> a;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		if(s=="PUSHFRONT"){
			int n;
			cin>>n;
			a.push_front(n);
		}
		if(s=="PUSHBACK"){
			int n;
			cin>>n;
			a.push_back(n);
		}
		if(s=="POPFRONT") if (!a.empty()) a.pop_front();
		if(s=="POPBACK") if (!a.empty()) a.pop_back();
		if(s=="PRINTFRONT"){
			if (a.empty()) cout<<"NONE";
			else cout<<a.front();
			cout<<endl;
		}
		if(s=="PRINTBACK"){
			if (a.empty()) cout<<"NONE";
			else cout<<a.back();
			cout<<endl;
		}
	}
	return 0;
}

