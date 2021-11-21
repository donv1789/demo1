#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        do{
            cout<<a<<" ";
        } while(next_permutation(a.begin(),a.end()));
        cout<<endl;
    }
    
    return 0;
}

