#include<iostream>
#include<queue>
using namespace std;
queue <int> q;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		while(!q.empty()) q.pop();
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			switch(a)
			{
				case 1:{
					cout<<q.size()<<endl;
					break;
				}
				case 2:{
					if(q.empty())cout<<"YES"<<endl;
					else cout<<"NO"<<endl;
					break;
				}
				case 3:{
					int temp;
					cin>>temp;
					q.push(temp);
					break;
				}
				case 4:{
					if(!q.empty()) q.pop();
					break;
				}
				case 5:{
					if(q.empty())cout<<-1<<endl;
					else cout<<q.front()<<endl;
					break;
				}
				case 6:{
					if(q.empty())cout<<-1<<endl;
					else cout<<q.back()<<endl;
					break;
				}
			}
		}
	}
	return 0;
	
}
