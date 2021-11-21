#include<iostream>
#include<queue>
using namespace std;
void xu_ly(string s)
{
	int i=0;
	long long dem=0;
	queue <int> so;
	while(s[i] && s[i]>='0' && s[i]<='1')
	{
		if(s[i]=='0') so.push(0);
		else{
			if(s[i]=='1') so.push(1);
		}
		i++;
	}
	while(s[i++]) so.push(1);
	while(!so.empty()){
		dem=dem*2+so.front();
		so.pop();
	}
	cout<<dem<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		string s="";
		cin>>s;
		xu_ly(s);
	}
	return 0;
}
