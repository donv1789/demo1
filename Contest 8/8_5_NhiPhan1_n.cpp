#include<bits/stdc++.h>//yes
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        queue<string>q;
        int n; cin>>n;
        q.push("1");
        while(n--){
            string s1 = q.front();
            q.pop();
            cout<<s1<<" ";
            string s2=s1;
            q.push(s1.append("0"));//mo rong chuoi
            q.push(s2.append("1"));
        }
        cout<<endl;
    }
}
