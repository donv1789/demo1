#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const int MOD = (int)1e9+7;
const bool MULTI_TEST = true;
using namespace std;

// vector<vector<int> > edges;
int n,k;
vector <bool> mark;
vector <int> parent;
bool res;

int find(int i)  
{  
    if (parent[i] == -1)  
        return i;  
    return find(parent[i]);  
}  
  
// A utility function to do union of two subsets  
void Union(int x, int y)  
{  
    int xset = find(x);
    int yset = find(y);  
    if(xset != yset) 
    {  
        parent[xset] = yset;  
    }  
}  


void solve(){
	// edges.clear();
	cin >> n >> k;
	// edges.resize(n+1,vector<int>(0));
    parent.clear();
    parent.resize(n+1,-1);
    res = false;
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		int x = find(u);
        int y = find(v);
        if(x == y) res = true;
        Union(x,y);
	}
    
    if(res) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

