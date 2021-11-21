#include<bits/stdc++.h>
using namespace std;
int x[100],n,y[100][100],d=0;
void In()
{
	cin>>n;
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
			if (i==n) d++;
			else BackTrack(i+1);
			y[i][j]=0;
		}
	}
}

int main()
{
	int test;
	cin>>test;
	while(test--){
		In();
		BackTrack(1);
		cout<<d;
		cout<<endl;
	}
}
