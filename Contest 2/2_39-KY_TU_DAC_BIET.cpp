#include <iostream>
#include <cmath>
using namespace std;
char last[64];
string s;
char tim(long long n,long long m){
	if(m==s.size())
		return s[n-1];
	if(n<=m/2)
		return tim(n,m/2);
	long long temp=log(m/s.size())/log(2)+0.5;
	if(n-m/2==1)
		return last[temp-1];
	return tim(n-m/2-1,m/2);
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int i=0,j=0;
		long long n,m;
		cin>>s>>n;
		string temp=s;
		while(i+temp.size()<64)
		{
			last[i++]=temp[temp.size()-1];
			temp.push_back(last[i-1]);
			temp+=temp;
			temp.erase(temp.size()-2,2);
		}
		while(i<64)last[i++]=temp[j++];
		m=s.size();
		while(n>m)m*=2;
		cout<<tim(n,m)<<endl;
	}
	
	return 0;
}
