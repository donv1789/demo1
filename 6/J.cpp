#include <iostream>
using namespace std;

int change(string s, string des){
	for(int c=1; c<s.size(); c++){
		char tmp = s[0];
		for(int i=0; i<s.size()-1; i++) s[i] = s[i+1];
		s[s.size()-1] = tmp;
		if( s == des ) return c;
	}
	return 0;
}

int min(int a, int b){
	return a < b ? a : b;
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	int n, res = 1e9, check = 1;
	cin>>n;
	string s[n+5];
	for(int i=0; i<n; i++) cin>>s[i];
	for(int i=0; i<n; i++){		// string des
		int tmp = 0;
		for(int j=0; j<n; j++){		// string src
			if( s[i] == s[j] ) continue;
			int count = change(s[j], s[i]);
			if( count ) tmp += count;
			else{
				check = 0;	// khong the chuyen s[j] -> s[i]
				break;
			}
		}
		if( check ) res = min(tmp, res);
		else break;
	}
	if( check ) cout<<res;
	else cout<<-1;
}
