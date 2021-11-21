#include<bits/stdc++.h>//yes
using namespace std;
int n, k;
vector<long long>a;
void Floor(){
    sort(a.begin(),a.end());
    for(int i=n-1; i>=0; i--){
        if(a.at(i)<=k){
            cout<<i+1<<endl;
            break;
        }
    }
    if(a[0]>k) cout<<"-1"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(n);
        for(int i=0; i<n; i++)  cin>>a.at(i);
        Floor();
    }
}
