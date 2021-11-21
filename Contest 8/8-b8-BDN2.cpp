#include <iostream>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		long dec,rem,i=1,sum=0;
	    cin>>dec;
	    while(dec>0)
	    {
	        rem=dec%2;
	        sum=sum + (i*rem);
	        dec=dec/2;
	        i=i*10;
	    }
	    cout<<sum<<endl;
	    cin.get();
	}
    return 0;
}
