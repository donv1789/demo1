#include <iostream>
#include <queue>
using namespace std;

void bfs(queue <int> ke[], int n){
	queue <int> q;
	bool d[1005] = {0};
	q.push(1);
	d[1] = 1;
	int count = 1;
	while( !q.empty() ){
		int z = q.front();
		q.pop();
		while( !ke[z].empty() ){
			int t = ke[z].front();
			ke[z].pop();
			if( !d[t] ){
				q.push(t);
				d[t] = 1;
				count++;
			}
		}
	}
	if( count != n ) cout<<"NO\n";
	else cout<<"YES\n";
}

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	int t, n, u, v;
	cin>>t;
	while( t-- ){
		cin>>n;
		queue <int> ke[n+5];
		for(int i=1; i<n; i++){
			cin>>u>>v;
			ke[u].push(v);
			ke[v].push(u);
		}
		bfs(ke, n);
	}
}

