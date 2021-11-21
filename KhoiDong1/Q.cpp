#include <bits/stdc++.h>
using namespace std;

int sosanh(string a,string b){
	if (a.length()!=b.length()) return 1;
    else{
    	for( int i = 0; i < b.length(); i++ ) {
        	if( b[i] <= 'Z' && b[i] >= 'A' ) b[i] += 32;
    	}
    	for(int i=0; i<a.length(); i++){
    		if (a[i]!=b[i]) return 1;
		}
		return 0;
	}
}

void solve(int lan) {
    string s; getline(cin,s);
    s = s + "  ";
    string del; getline(cin,del);
    // chuyen ve in thuong het
    for( int i = 0; i < del.length(); i++ ) {
        if( del[i] <= 'Z' && del[i] >= 'A' ) del[i] += 32;
    }
    
    vector <string> sky; // tach tu vao mang sky
    for( int i = 0; i < s.length(); i++ ) {
        if( s[i] != ' ' ) {
            string temp = "";
            while( s[i] != ' ' ) {
                temp += s[i++];
            }
            if(sosanh(del,temp))sky.push_back(temp);
//        cout << temp << endl;
        }
    }
    cout<<"Test "<<lan<<": ";
    for( int i = 0; i < sky.size(); i++ ) {
        for( int j = 0; j < sky[i].length(); j++ ) cout << sky[i][j];
        if( i == sky.size()-1 ) cout << endl;
        else cout << " ";
    }
}

int main() {
    int sotest; cin >> sotest;
    string s; getline(cin,s);
    for(int i=1; i<=sotest; i++) {
		solve(i);
    }
    return 0;
}
