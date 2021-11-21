#include<iostream>
using namespace std;
int so_can_tim,n;
void tim(int n)
{
	int so7,so4,du;
	so7=n/7;
	so4=(n%7)/4;
	du=(n%7)%4;
	if(du>so7)cout<<"-1"<<endl;
	else
	{
	 so7-=du;
	 so4+=2*du;
	 for(int i=0;i<so4;i++)
	  cout<<'4';
	 for(int i=0;i<so7;i++)
	  cout<<'7';
	 cout<<endl;
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		so_can_tim=0;
		tim(n);
	}
	return 0;
}
