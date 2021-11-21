#include <bits/stdc++.h>//yes
using namespace std;
int a[100],n,k;
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
        cin>>n>>k;
        for(int i=0; i<n; i++) cin>>a[i];
        if(chiamang()%k != 0) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
}
