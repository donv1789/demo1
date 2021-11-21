#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
using namespace std;
long long l[N],r[N],h[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1; i<=n; i++){
			cin>>h[i];
			l[i]=r[i]=0;
		} 
		for(int i=1; i<=n; i++){
//			cout<<h[i]<<endl;
			l[i]=i-1;
			while(l[i]>0 && h[i]<=h[l[i]]){
				l[i]=l[l[i]];
				l[i]--;
			} 
			l[i]++;
			r[i]=i+1;
			while(r[i]<n+1 && h[i]<=h[r[i]]){
				if(r[r[i]]) r[i]=r[r[i]]; 
				r[i]++;
			}
			r[i]--;
		}
		long long kq=0;
		for(int i=1; i<=n; i++){
			long long tmp=h[i]*(r[i]-l[i]+1);
			if (kq<tmp) kq=tmp;
		}
		cout<<kq<<endl;
	}
}                      
