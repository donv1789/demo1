#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i= a; i<= b; ++i)
#define FORD(i,a,b) for(int i= a; i>= b; --i)
#define pb push_back
#define fi first
#define se second
const long long base=1e9+7;
const int Nmax=1e6 + 9;
typedef pair<int, int> ii;
typedef long long ll;
int getBit(int sky, int i) {return (sky >> (i-1)) & 1;}
int onBit(int sky, int i) { return sky | (1 << (i-1));}

int dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[] = {1, 0, -1, 0, -1, 1, 1, -1};
string sky[209];
string kq[209];
bool ok, d[209][209];
vector <string> vt;
int m, n;

bool check( int x, int y ) {
	return ( ( x < 0 || x >= n) || ( y < 0 || y >= n) || d[x][y] ); // k xet dc
}

void dfs(int x, int y, int vt, string word, int len ) {
	if( vt == len ) {
		ok = true; return;
	}
	if( ok || vt > len ) return;
	
	for( int i = 0; i < 8; i++ ) {
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if( !check(x1,y1) && word[vt] == kq[x1][y1] ) // tim duoc tu thoa man
		{
			d[x1][y1] = true;
			if( word[vt] == 'q' && word[vt+1] == 'u' ) dfs(x1,y1,vt+2,word,len);
			else if( word[vt] != 'q' ) dfs(x1,y1,vt+1,word,len);
			d[x1][y1] = false;
		}
	}
}

int main() {
//	freopen("TEST.INP","r",stdin);
//	freopen("TEST.OUT","w",stdout);
	cin >> m;
	FOR(i,1,m ) cin >> sky[i];
	while(1) {
		cin >> n;
		FOR(i,0,n-1) cin >> kq[i];
		if( n == 0 ) return 0;
		memset(d,false,sizeof(d));
		vt.clear();
		FOR(k,1,m) {
			ok = false;
			for( int i = 0; i < n && !ok; i++ ) {
				for( int j = 0; j < n && !ok; j++ ) { 
					// qu = q 
					if( sky[k][0] == kq[i][j] && sky[k][0] == 'q' && sky[k][1] == 'u' ) {
						d[i][j] = 1;
						dfs(i,j,2,sky[k],sky[k].length());
						d[i][j] = 0;
					}
					// q khong di le :))
					else if( sky[k][0] == kq[i][j] && sky[k][0] != 'q' ) {
						d[i][j] = 1;
						dfs(i,j,1,sky[k],sky[k].length());
						d[i][j] = 0;
					}
				}
			}
			if( ok ) vt.push_back(sky[k]);
		}
		sort(vt.begin(),vt.end());
		for( int i = 0; i < vt.size(); i++ ) cout << vt[i] << endl;
		cout << "-" << endl;
	}
	return 0;
}

