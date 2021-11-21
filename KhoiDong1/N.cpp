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
    for( int i = 0; i < sky.size(); i++ ) {
        if( sky[i][0] <= 'z' && sky[i][0] >= 'a' ) cout << (char)(sky[i][0]-32);
        else cout<<sky[i][0];
        for( int j = 1; j < sky[i].length(); j++ ) cout << sky[i][j];
        if( i == sky.size()-1 ) cout << endl;
        else cout << " ";
    }
}

int main() {
    int sotest=0; cin >> sotest;
    string s; getline(cin,s);
    while(sotest-- ) {
        solve();
    }
    return 0;
}
/*
5
	nGUYEn 	quaNG vInH
tRan thi THU        HuOnG
nGO quoC            VINH
lE 		tuAn		 aNH
nGO quoC            VINH
*/
