#include<bits/stdc++.h>
using namespace std;
string s;

int check()
{
	stack <char> ngc;
	for (int i=0; i<=s.length(); i++)
	{
		if (s[i] == '{') ngc.push(s[i]);
		if (s[i] == '}') 
		{
			if (ngc.empty()) return 0;
			else if (ngc.top() == '{') ngc.pop();
			else return 0;
		}
		if (s[i] == '(') ngc.push(s[i]);
		if (s[i] == ')') 
		{
			if (ngc.empty()) return 0;
			else if (ngc.top() == '(') ngc.pop();
			else return 0;
		}
		if (s[i] == '[') ngc.push(s[i]);
		if (s[i] == ']') 
		{
			if (ngc.empty()) return 0;
			else if (ngc.top() == '[') ngc.pop();
			else return 0;
		}
	}
	if (ngc.empty()) return 1;
	else return 0;
}

int main()
{
	int t;
	cin>>t;
	while (t--) 
	{
		cin>>s;
		if (check()) cout<<"YES";
		else cout<<"NO";
		cout<<'\n';
	}
}

