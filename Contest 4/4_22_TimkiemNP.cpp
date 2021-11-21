#include <bits/stdc++.h>//yes
using namespace std;
vector<long long>a;
int n,k;

int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(n);
        for(int i=0; i<n; i++) cin>>a.at(i);
        if(binary_search(a.begin(), a.end(),k )){
            cout<<upper_bound(a.begin(),a.end(),k) - a.begin()<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
