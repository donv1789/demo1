#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s; getline(cin,s);
    s = s + "  ";
    // chuyen ve in thuong het
    for( int i = 0; i < s.length(); i++ ) {
        if( s[i] <= 'Z' && s[i] >= 'A' ) s[i] += 32;
    }
    vector <string> sky; // tach tu vao mang sky
    for( int i = 0; i < s.length(); i++ ) {
        if( s[i] != ' ' ) {
            string temp = "";
            while( s[i] != ' ' ) {
                temp += s[i++];
            }
            sky.push_back(temp);
//        cout << temp << endl;
        }
    }
    for( int i = 1; i < sky.size(); i++ ) {
        cout << (char)(sky[i][0]-32);
        for( int j = 1; j < sky[i].length(); j++ ) cout << sky[i][j];
        if( i == sky.size()-1 ) cout << ", ";
        else cout << " ";
    }
    for( int i = 0; i < sky[0].length(); i++ )
        cout << (char)(sky[0][i]-32);
    cout << endl;
}

int main() {
    int sotest; cin >> sotest;
    string s; getline(cin,s);
    while(sotest-- ) {
        solve();
    }
    return 0;
}
