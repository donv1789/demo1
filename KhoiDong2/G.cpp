#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=0;
	cin>>t;
	while(t--){
		int i = 0, j, k;
		string s;
	    cin>>s;
	    for(i = 0; i < s.length(); i++)
	    {
	        if(s[i] == 'I')
	            a[i] = 1;
	        else if(s[i] == 'V')
	            a[i] = 5;
	        else if(s[i] == 'X')
	            a[i] = 10;
	        else if(s[i] == 'L')
	            a[i] = 50;
	        else if(s[i] == 'C')
	            a[i] = 100;
	        else if(s[i] == 'D')
	            a[i] = 500;
	        else if(s[i] == 'M')
	            a[i] = 1000;
	    }
	    k = a[s.length()-1];
	    for(i = s.length()-1; i > 0; i--)
	    {
	        if(a[i] > a[i-1])
	            k = k - a[i-1];
	        else if(a[i] == a[i-1] || a[i] < a[i-1])
	            k = k + a[i-1];
	    }
	    cout<<k<<endl;
	}
	return 0;
}

