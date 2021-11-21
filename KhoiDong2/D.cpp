#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n=0;
    cin >> n;
    long long maxsum=0;
    long long sum=0;
    long long a[n+1]={0};
    for (int i=1;i<=n;i++)
    {
        long long a;
        cin >> a;
        sum+=a;
        if (sum <0) sum =0;
        maxsum=max(sum,maxsum);
    }
    cout << maxsum<< endl;
}
int main()
{
    int t=0;
    cin >> t;
    while (t--)
    solve();
    return 0;
}
