#include<bits/stdc++.h>
using namespace std;
string s;

int check()
{
	int kl=0;
    stack <int> ngc;
    ngc.push(-1);
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='(') ngc.push(i);
        else
        {
            if (ngc.top()!=-1 && s[ngc.top()]=='(')
            {
                ngc.pop();
                if (i-ngc.top() > kl)
                    kl = i-ngc.top();
            }
            else ngc.push(i);
        }
    }
    return kl;
}

int main()
{
	int t;
	cin>>t;
	while (t--) 
	{
		cin>>s;
		cout<<check()<<endl;
	}
}

