#include <bits/stdc++.h>

using namespace std;
typedef map<string,bool> msb;
string r_left(string s)
{
    swap(s[0],s[3]);
    swap(s[1],s[3]);
    swap(s[3],s[4]);
    return s;
}
string r_right(string s)
{
    swap(s[1],s[2]);
    swap(s[1],s[5]);
    swap(s[4],s[1]);
    return s;
}
string bd="";
string kt="";
msb bla;
typedef pair <string ,int> psi;

int main()
{
    int t;
    cin>>t;
    while(t--){
    	for (int i =0;i<6;i++)
    {
        int temp;
        cin >> temp;
        bd+=(char)(temp+'0');
    }
    for (int i =0;i<6;i++)
    {
        int temp;
        cin >> temp;
        kt+=(char)(temp+'0');
    }
    bla[bd]=true;
    queue <psi> cla;
    cla.push(psi(bd,0));
    while (cla.size())
    {
        psi top = cla.front();
        cla.pop();
        if (top.first == kt) return cout << top.second, 0;
        string sl = r_left(top.first);
        if (bla[sl]==false)
        {
            bla[sl]=true;
            cla.push(psi(sl,top.second+1));
        }
        string sr = r_right(top.first);
        if (bla[sr]==false)
        {
            bla[sr]=true;
            cla.push(psi(sr,top.second+1));
        }
    }
	}
    return 0;
}
