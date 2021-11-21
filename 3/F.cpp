#include <bits/stdc++.h>

using namespace std;

int main ()
{
    long n, k;
    cin>>n>>k;
    stack <int> s;
    for (long i=1; i<=n; i++)
    {
        char tmp_char;
        cin>>tmp_char;
        int tmp_int = tmp_char - '0';
        if (s.empty())
        {
            s.push(tmp_int);
        }
        else
        {
            while (!s.empty() && tmp_int > s.top() && k>0)
            {
                s.pop();
                k--;
            }
            s.push(tmp_int);
        }
    }
    while (k>0 && !s.empty())
    {
        s.pop();
        k--;
    }
    vector <int> smallest;
    while (!s.empty())
    {
        int tmp=s.top();
        s.pop();
        smallest.push_back(tmp);
    }
    for (long i=smallest.size()-1; i>=0; i--)
        cout<<smallest[i];
    return 0;
}
