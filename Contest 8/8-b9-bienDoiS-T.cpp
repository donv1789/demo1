#include<iostream>
#include<queue>
#include<map>
using namespace std;
queue<int> q;
map<int,int> thu_tu,nhanh;
int check(int top,int next)
{
	if(nhanh[next]==0)
	{
		thu_tu[next]=thu_tu[top]+1;
		nhanh[next]=nhanh[top];
		q.push(next);
	}
	else if(nhanh[next]!=nhanh[top])
	{
		cout<<thu_tu[next]+thu_tu[top]+1<<endl;
		return 1;
	}
	return 0;
}
void find(int x,int y)
{
	q.push(x);
	q.push(y);
	nhanh[x]=1;
	nhanh[y]=2;
	thu_tu[x]=thu_tu[y]=0;
	while(!q.empty())
	{
		int top=q.front();
		q.pop();
		if(nhanh[top]==1)
		{
			int temp=top-1;
			if(temp>0)
			 if(check(top,temp))return;
			if(top<y)
			{
			  temp=top*2;
			  if(check(top,temp))return;	
			}
		}
		else
		{
			int temp=top+1;
			if(check(top,temp))return ;
			if(top>x&&top%2==0)
			{
				temp=top/2;
				if(check(top,temp))return;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		while(!q.empty()) q.pop();
	    thu_tu.clear();
		nhanh.clear();
		cin>>x>>y;
		find(x,y);
	}
	return 0;
}
