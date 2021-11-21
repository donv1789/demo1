#include <bits/stdc++.h>//yes
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        bool val= binary_search(a,a+n,x);
        if(val==true) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
}
