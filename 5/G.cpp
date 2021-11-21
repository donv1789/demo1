#include <bits/stdc++.h>

using namespace std;
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};
typedef pair <int,int> pii;
int main()
{
    int maxx=0;
    ios_base::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    queue <pii> bla;
    queue <int> cla;
    int a[n][m];
    for (int i =0;i<n;i++)
        for (int j =0;j<m;j++)
    {
        cin >> a[i][j];
        if (a[i][j]==2)
        {
            bla.push(pii(i,j));
            cla.push(0);
        }
    }
    while (bla.size())
    {
        pii top = bla.front();
        bla.pop();
        int day = cla.front();
        maxx=max(maxx,day);
        cla.pop();
        for (int i =0;i<=3;i++)
        {
            int newx = top.first + x[i];
            int newy = top.second + y[i];
            if (newx >=0 && newx <n && newy>=0 && newy <m && a[newx][newy]==1)
            {
                bla.push(pii(newx,newy));
                cla.push(day+1);
                a[newx][newy]=2;
            }
        }
    }
    for (int i = 0;i<n;i++)
    {
        for (int j =0 ;j<m;j++)
            //cout << a[i][j] << " " ;
        //cout << endl;
            if (a[i][j]==1) return cout << -1 , 0;
    }
    cout << maxx <<endl;
    return 0;
}
