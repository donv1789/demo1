#include <iostream>
using namespace std;
int c,n,a[101],f[101][25001];
int main()
{
	cin>>c>>n;
	for(int i = 1; i <= n; i++)	
	 cin >> a[i];
	for(int i = 1; i <= n; i++)
		for(int j = 0; j <= c; j++)
		{
			f[i][j] = f[i-1][j];
			if(a[i] <= j)f[i][j] = max(f[i][j], f[i-1][j-a[i]]+a[i]);
		}
	cout << f[n][c];
	return 0;
}


