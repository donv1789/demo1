#include<bits/stdc++.h>//yes
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<vector<int> >c;
        c.resize(n+1);
        for(int i=0; i<m; i++){
            int a,b;
            cin>>a>>b;
            c.at(a).push_back(b);
        }
        for(int i=1; i<=n; i++){
            cout<<i<< ": ";
            for(int j=0; j<c.at(i).size(); j++){
                cout<<c.at(i).at(j)<<" ";
            }
        cout<<endl;
        }
    }
}

