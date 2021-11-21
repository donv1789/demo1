#include<bits/stdc++.h>//yes

using namespace std;
int n,m;
vector<int>a;
vector<int>b;
void hop_mang(){
    int i=0, j=0;
    while(i<n && j<m){
        if(a.at(i)<b.at(j)){
            cout<<a.at(i)<<" ";
            i++;
        }
        else if(a.at(i)>b.at(j)){
            cout<<b.at(j)<<" ";
            j++;
        }
        else{
            cout<<a.at(i++)<<" ";
            j++;
        }
    }
    while(i<n) cout<<a.at(i++)<<" ";
    while(j<m) cout<<b.at(j++)<<" ";
}
void giao_mang(){
    int i=0, j=0;
    while(i<n && j<m){
        if(a.at(i)<b.at(j)) i++;
        else if(a.at(i)>b.at(j)) j++;
        else{
            cout<<b.at(j)<<" ";
            i++;
            j++;
        }
    }
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
        cout<<endl;
        giao_mang();
        cout<<endl;
    }
}

