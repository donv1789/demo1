#include<iostream>
#include<stack>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	long long n;
	cin>>t;
	while(t--){	
		stack<int> s;
		cin>>n;
		int left[n],right[n];
		long long a[n];
		long long smax=0;
		for(int i=0;i<n;i++) cin>>a[i];
		s.push(0);
		for(int i=1;i<n;i++){
			while(s.size()&&a[s.top()]>a[i]){
				right[s.top()]=i-s.top();
				s.pop();
			}
			s.push(i);
		}
		while(s.size()){
			right[s.top()]=n-s.top();
			s.pop();
		}
		s.push(n-1);
		for(int i=n-2;i>=0;i--)	{
			while(s.size()&&a[s.top()]>a[i]){
				left[s.top()]=s.top()-i;
				s.pop();
			}
			s.push(i);
		}
		while(s.size()){
			left[s.top()]=s.top()+1;
			s.pop();
		}
		for(int i=0;i<n;i++){
			long long temp=a[i]*(left[i]+right[i]-1);
			if(temp>smax)smax=temp;
		}
		cout<<smax<<endl;
	}
	return 0;
}
