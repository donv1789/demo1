#include<iostream>
#include<string>
using namespace std;
string s;
void next () {
    int i;
   for(i=s.length()-1;i>=0;i--) {
       if (s[i]=='0') {
           s[i]='1';
           break;
       }
       else s[i]='0';
   }
}

int display() {
    for(int i=0;i<s.length();i++) {
        cout<<s[i];
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>s;
        next();
        display();
    }
}
