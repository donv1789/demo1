#include<bits/stdc++.h>//yes
using namespace std;
vector<int>a;
int n,k;

int hieu(){
    sort(a.begin(),a.end(),greater<int>()); //sx giam dan
    int so1=0,  s=0;
    for(int i=0; i<n; i++)  s+=a.at(i);
    int M = max(k, n-k);
    for(int i=0; i<M; i++)  so1+=a.at(i);
    cout<<so1-(s-so1);
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(n);
        for(int i=0; i<n; i++) cin>>a.at(i);
        hieu();
        cout<<endl;
    }
}
