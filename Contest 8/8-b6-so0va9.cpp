#include<iostream>
#include<queue>
using namespace std;
queue<pair<string,int> > q;
void find(int n)
{
	string temp="9";
	q.push(make_pair(temp,9%n));
	while(!q.empty())
	{
		pair<string,int> top=q.front();
		if(top.second==0){
			cout<<top.first<<endl;
			return;
		}
		q.pop();
		for(int i=0;i<=1;i++)
		{
			int val=((top.second*10)%n+i*9)%n;
			string next=top.first;
			next.push_back(i*9+'0');
			q.push(make_pair(next,val));
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		while(!q.empty()) q.pop();
		find(x);
	}
	return 0;
}
