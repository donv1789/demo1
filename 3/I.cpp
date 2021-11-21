#include <bits/stdc++.h>

using namespace std;
struct cmp
{
    bool operator () (int a,int b)
    {
        return a<b;
    }
};

bool check(int a,int b,int c)
{
    if ( a+b <=c) return 0;
    if (c+b<=a) return 0;
    if (a+c <=b) return 0;
    return 1;
}
void solve()
{
    int n;
    cin >> n;
    priority_queue <int ,vector <int>, greater<int> > bla;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        bla.push(tmp);
    }
    /*while (bla.size())
    {
        cout << bla.top() << endl;
        bla.pop();
    }*/
    vector <int> cla;
    while (bla.size())
    {
        cla.push_back(bla.top());
        bla.pop();
    }
    for (int i=0;i<cla.size()-3;i++)
    {
        if (check(cla[i],cla[i+1],cla[i+2]))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}
