#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
string s;
void solve()
{
	cin>>s;
	int dem=0;
	if (s[0]==')'){
		s[0]='(';
		dem++;	
	}
	if (s[s.length()-1]=='('){
		s[s.length()-1]=')';
		dem++;	
	}
	stack <char> ngc;
	for (int i=0; i<=s.length(); i++)
	{
		if (s[i] == '(') ngc.push(s[i]);
		if (s[i] == ')') 
		{
			if (ngc.empty()){
				s[i]='(';
				dem++;
				ngc.push(s[i]);
			}
			else if (ngc.top() == '(') ngc.pop();
		}
	}
	cout<<dem+ngc.size()/2<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

