#include<bits/stdc++.h>//yes
using namespace std;
int n,m;
vector<long long>a;
vector<long long>b;
vector<long long>c;
void hop_mang(){
    int i=0,j=0,k=0;
    int s=n+m;
    c.resize(s);
    while(i<n && k<s){
        c.at(k)=a.at(i);
        k++;
        i++;
    }
    k=n;
    while(j<m && k<s){
        c.at(k)=b.at(j);
        k++;
        j++;
    }
    sort(c.begin(),c.end());
    for(int k=0; k<s; k++) cout<<c.at(k)<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        a.resize(n);
        b.resize(m);
        for(int i=0; i<n; i++) cin>>a.at(i);
        for(int j=0; j<m; j++) cin>>b.at(j);
        hop_mang();
    }
}
