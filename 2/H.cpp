#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int n, a[100005], cnt, b[500005], j;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		cnt=0;
	    cin>>n;
		j=n/2-1;
	    for(int i=0; i<n; i++) cin>>a[i];
	    sort(a, a+n);
	    for(int i=n-1; i>=0; i--) 
		 if(b[i]==0){
	        while(a[j]>a[i]/2 && j>=0) j--;
	        while(b[j]==1 && j>=0) j--;
	        if(j<0) break;
	        if(b[j]==0 && a[j]<=a[i]/2) b[i]=b[j]=1, cnt++;
	     }
	    memset(b,0,sizeof(b));
	    cout<<n-cnt<<endl;
	}
    return 0;
}

