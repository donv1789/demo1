#include<iostream>
#include<stack>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	long long n;
	cin>>t;
	while(t--)	{
		stack<int> s;
		cin>>n;
		long long a[n],f[n];
		for(int i=0;i<n;i++)
		 cin>>a[i];	
		s.push(0);
		for(int i=1;i<n;i++)
		{
			while(s.size()&&a[s.top()]<a[i]){
				f[s.top()]=a[i];
				s.pop();
			}
			s.push(i);
		}
		while(s.size()){
			f[s.top()]=-1;
			s.pop();
		}
		for(int i=0;i<n;i++)
		 cout<<f[i]<<" ";
		cout<<endl;
	}
	return 0;
}
