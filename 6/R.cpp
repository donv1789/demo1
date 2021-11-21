#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> ke[1005];
int pre[1005];

void reset(){
	for(int i=1; i<=1000; i++) pre[i] = 0;
}

bool bfs(int u, int v){
	queue <int> q;
	reset();
	q.push(u);
	pre[u] = -1;
	while( !q.empty() ){
		int z = q.front(), t;
		q.pop();
		for(int i=0; i<ke[z].size(); i++){
			t = ke[z][i];
			if( pre[t] == 0 ){
				q.push(t);
				pre[t] = z;
				if( pre[v] != 0 ) return true;
			}
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	int t, n, m, u, v, q;
	cin>>t;
	while( t-- ){
		cin>>n>>m;
		for(int i=1; i<=n; i++) ke[i].clear();
		while( m-- ){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		cin>>q;
		while( q-- ){
			cin>>u>>v;
			if( bfs(u, v) ) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}
