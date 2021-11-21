#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

string reverse(string s){
	int len = s.length();
	for(int i = 0; i < len/2; i++)
		swap(s[i], s[len-i-1]);
	return s;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin >> s;
		string x = reverse(s);
		int n = s.length();
		int a[5001] = {0};
		int b[5001];
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				if(i == 0 || j == 0) b[j] = 0;
				else{
					if(s[i-1] == x[j-1]) b[j] = a[j-1] + 1;
					else b[j] = max(a[j], b[j-1]);
				}
			}
			swap(a, b);
		}
		cout<<a[n]<<endl;
	}
	return 0;
}

