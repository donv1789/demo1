#include <iostream>
#include <queue>
using namespace std;

int main() {
//	ios_base::sync_with_stdio(NULL);
//	cin.tie(NULL);
	int t, n, c, d, a;
	cin>>t;
	while( t-- ){
		cin>>n>>c>>d;
		priority_queue <int> q;
		for(int i=0; i<n; i++){
			cin>>a;
			q.push(a);
		}
		double s1 = 0, s2 = 0;
		for(int i=0; i<min(c,d); i++){
			s1 += q.top();
			q.pop();
		}
		for(int i=0; i<max(c,d); i++){
			s2 += q.top();
			q.pop();
		}
		s1 = 1.0 * s1 / min(c,d);
		s2 = 1.0 * s2 / max(c,d);
		printf("%.6lf\n", s1+s2);
	}
}
