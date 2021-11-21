#include <bits/stdc++.h>
using namespace std;

int sosanh(string a,string b){
    if (a.length()!=b.length()) return 0;
    else{
    	for(int i=0; i<a.length(); i++){
    		if (a[i]!=b[i]) return 0;
		}
		return 1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int sotest=0; 
	cin >> sotest;
    string z;
	getline(cin,z);
	vector<string> email;
    while(sotest-- ) {
        string s; getline(cin,s);
	    s = s + "  ";
	    for( int i = 0; i < s.length(); i++ ) {
	        if( s[i] <= 'Z' && s[i] >= 'A' ) s[i] += 32;
	    }
	    vector <string> sky; 
	    for( int i = 0; i < s.length(); i++ ) {
	        if( s[i] != ' ' ) {
	            string temp = "";
	            while( s[i] != ' ' ) {
	                temp += s[i++];
	            }
	            sky.push_back(temp);
	        }
	    }
	    string tmp="";
        for( int j = 0; j < sky[sky.size()-1].length(); j++ ) tmp+=sky[sky.size()-1][j];
        for( int i = 0; i < sky.size()-1; i++ ) tmp+=sky[i][0];
		int d=0;
        for( int i=0; i<email.size(); i++){
			if(sosanh(tmp,email[i])) d++;
		}
		email.push_back(tmp);
    	if (d!=0) cout<<tmp<<d+1<<"@ptit.edu.vn"<<endl;
    	else cout<<tmp<<"@ptit.edu.vn"<<endl;
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
