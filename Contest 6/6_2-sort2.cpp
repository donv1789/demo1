#include<bits/stdc++.h>//yes
using namespace std;
int n, x;
vector<int>a;
void sx(){
    for(int i=0 ;i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(abs(x-a.at(j))>abs(x-a.at(j+1))){
                swap(a.at(j),a.at(j+1));
            }
        }
    }
    for(int i=0 ;i<n; i++)
        cout<<a.at(i)<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>x;
        a.resize(n);
        for(int i=0; i<n; i++) cin>>a.at(i);
        sx();
    }
}
