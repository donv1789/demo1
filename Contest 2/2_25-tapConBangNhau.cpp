#include <bits/stdc++.h>//yes
using namespace std;
int a[100],n;
int chiamang(){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];
        if(chiamang()%2 != 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
