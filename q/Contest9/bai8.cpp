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

vector<vector<int> > edges;
int n,k,start;
vector<bool> mark;

void solve(){
	edges.clear();
	cin >> n >> k >> start;
	edges.resize(n+1,vector<int>(0));
	for(int i=0;i<k;i++){
		int u,v;
		cin >> u >> v;
		edges[u].pb(v);
		edges[v].pb(u);
	}
	mark.clear();
	mark.resize(n+1,0);
	mark[start] = 1;
	queue <int> q;
	q.push(start);
	while(!q.empty()){
		cout << q.front() << ' ';
		int u = q.front();
		q.pop();
		for(int v=0;v<edges[u].size();v++){
			if(mark[edges[u][v]] == 0){
				mark[edges[u][v]] = 1;
				q.push(edges[u][v]);
			}
		}
	}
	cout << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

