#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const int MOD = (int)1e9+7;
const bool MULTI_TEST = false;
using namespace std;

int a[1001][1001];

void solve(){
	int n;
	cin >> n;
	string s;
	getline(cin,s);
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		getline(cin,s);
		s.pb(' ');
		int tmp = 0;
		for(int j=0;j<s.size();j++){
			if(s[j] != ' ') tmp = tmp*10 + s[j] - '0';
			else{
				a[i][tmp] = a[tmp][i] = 1;
				tmp = 0;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

