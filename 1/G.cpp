#include<bits/stdc++.h>
using namespace std;
int x[100],n=8,y[100][100],m,d=0,a[9][9];

void In()
{
	for(int i=1; i<=8; i++)
	 for(int j=1; j<=8; j++) cin>>a[i][j];
}

bool check(int row, int col)
{
	int i,j;
	for (i=1; i<=row; i++)
		if (y[i][col]) return false;	
    for (i=row, j=col; i>0 && j>0; i--, j--)
        if (y[i][j]) return false;
    for (i=row, j=col; j>0 && i<=n; i++, j--)
        if (y[i][j]) return false;
    for (i=row, j=col; i>0 && j>0; i--, j++)
        if (y[i][j]) return false;
    for (i=row, j=col; j>0 && i<=n; i++, j++)
        if (y[i][j]) return false;
    return true;
}

void BackTrack(int i)
{
	for (int j=1; j<=n; j++)
	{
		if (check(i,j))
		{
			y[i][j]=1;
			x[i]=j;
			d+=a[i][j];
			if (i==n){
				if (d>m) m=d;	
			}
			else BackTrack(i+1);
			y[i][j]=0;
			d-=a[i][j];
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		m=-1;
		In();
		BackTrack(1);
		cout<<m<<endl;	
	}
	return 0;
}

