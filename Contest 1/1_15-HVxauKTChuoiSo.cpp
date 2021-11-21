#include <bits/stdc++.h>//yes
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int stt;
        string s;
        cin>>stt>>s;
        bool val=next_permutation(s.begin(),s.end());
        if(val==true) cout<<stt<<" "<<s<<endl;
        else cout<<stt<<" BIGGEST"<<endl;
    }
}
