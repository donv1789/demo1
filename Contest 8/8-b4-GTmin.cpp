#include<iostream>
#include<queue>
#include<vector>
#include<stdio.h>
using namespace std;
string s;
long long chu[30],k;
priority_queue<long long,vector<long long>,less<long long> > q;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<30;i++)
         chu[i]=0;
		cin>>k;
		fflush(stdin);
		cin>>s;
	    if(k>=s.size())
		{
			cout<<0<<endl;
			continue;
		}
		for(int i=0;i<s.size();i++)
		 chu[s[i]-'A']++;
		for(int i=0;i<30;i++)
		 if(chu[i]) q.push(chu[i]);
		while(k--)
		{
			long long temp =q.top();
			q.pop();
			q.push(temp-1);
		}
		long long dem=0;
		while(!q.empty())
		{
			long long temp=q.top();
			dem+=(temp*temp);
			q.pop();
		}
		cout<<dem<<endl;
	}
	return 0;
}
