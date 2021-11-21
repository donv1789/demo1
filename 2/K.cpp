#include <bits/stdc++.h>
using namespace std;
int n,k;
long long a[11][11]={0};
const long long base = 1e9+7;

typedef struct matran
{
    long long a[11][11];
    matran()
    {
        memset(a,sizeof(a),0);
    }
};
matran operator * (const matran A, const matran B)
{
    matran C;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            {
                C.a[i][j]=0;
                for (int m=0;m<n;m++)
                    C.a[i][j]= (C.a[i][j] + (A.a[i][m]*B.a[m][j])%base)%base;
            }
    return C;
}
matran pwr(matran bla,int k)
{
    if (k==1) return bla;
    matran cla = pwr(bla,k/2);
    cla=cla*cla;
    if (k&1) return cla*bla;
    return cla;
}
void solve()
{
    matran z;
    cin >> n >> k;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        cin >> z.a[i][j];
    z=pwr(z,k);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            cout << z.a[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
