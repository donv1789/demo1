#include <bits/stdc++.h>
using namespace std;
char s[10005][10005];
int r,c; 
void loang( int x, int y) {
	s[x][y] = '.';
	if( s[x+1][y+1] == 'W' && x < r && y < c ) loang(x+1,y+1);
	if( x > 0 && s[x-1][y+1] == 'W' && y < c ) loang(x-1,y+1);
	if( x > 0 && s[x-1][y-1] == 'W' && y > 0 ) loang(x-1,y-1);
	if( s[x+1][y-1] == 'W' && x < r && y > 0 ) loang(x+1,y-1);
	if( s[x+1][y] == 'W' && x < r ) loang(x+1,y);
	if( s[x][y+1] == 'W' && y < c ) loang(x,y+1);
	if( s[x][y-1] == 'W' && y > 0 ) loang(x,y-1);
	if( x > 0 && s[x-1][y] == 'W' ) loang(x-1,y);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> r >> c;
	int dem = 0;
	for( int i=0; i<r; i++)
		for (int j=0; j<c; j++)
		cin >> s[i][j];
	for( int i=0; i<r; i++ ) {
		for( int j=0; j<c;j++ ) {
			if( s[i][j] == 'W' ) {
				dem++;
				loang(i,j);
			}
		}
	}
	cout << dem;
	return 0;
}

