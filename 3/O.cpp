#include <bits/stdc++.h>

using namespace std;

int Find(string &a, string &b) {
    int m = a.size(), n = b.size();
    a = ' ' + a;
    b = ' ' + b;
    vector< vector<int> > f(m+1, vector<int>(n+1, 0));
    for (int i=1; i<=m; i++) for (int j=1; j<=n; j++)
    {
        if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = max(f[i-1][j], f[i][j-1]);
    }
    return f[m][n];
}

int main() {
    string a;
	string b;
	int t;
	cin>>t;
	while(t--){
		cin >> a;
    	cin >> b;
    	cout << Find(a, b)<<endl;;
	}
}
