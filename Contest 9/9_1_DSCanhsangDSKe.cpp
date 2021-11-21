#include<bits/stdc++.h>//yes
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int> >x;
        x.resize(n+1);
        for(int i=0; i<m; i++){
            int a,b;
            cin>>a>>b;
            x.at(a).push_back(b);
            x.at(b).push_back(a);
        }
        for(int i=1; i<=n; i++){
            cout<<i<<": ";
            for(int j=0; j<x.at(i).size(); j++){
                cout<<x.at(i).at(j)<<" ";
            }
            cout<<endl;
        }
    }
}
