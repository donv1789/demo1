#include <bits/stdc++.h>//yes
using namespace std;
string s;
stack<char>c;
void dao_xau(){
    int n=s.size();
    for(int i=0; i<n; i++){
        if(s[i]!=' '){
            c.push(s[i]);
        }
        if(s[i]==' ' || s[i+1]==0){
            while(!c.empty()){
            cout<<c.top();
            c.pop();
            }
            cout<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        dao_xau();
    }
}
