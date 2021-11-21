#include<bits/stdc++.h>
using namespace std;
typedef pair<pair<int,int>,int> piii;
const int N = 1e6 + 9;
 
vector<piii> a;
map < int, int > Map;
 
bool cmp(piii u, piii v) {
	if (u.second > v.second) return true;
	if (u.second == v.second) {
		if (u.first.second < v.first.second) return true;
	}
	return false;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 	int t;
 	cin >> t;
 	while (t--) {
 		int n;
 		cin >> n;
 		vector<int> b(n);
 		a.clear();
 		Map.clear();
 		for (int i = 0 ; i < n; i++) {
 			cin >> b[i];
 			Map[b[i]]++;
 		}
 		for (int i = 0 ; i < n; i++) {
 			if (Map[b[i]]) {
 				a.push_back(make_pair(make_pair(b[i], i), Map[b[i]]));
 				Map[b[i]] = 0;
 			}
 		}
 		sort(a.begin(), a.end(), cmp);
 		for (int i = 0 ; i < a.size(); i++) {
 			for (int j = 0 ; j < a[i].second; j++) {
 				cout << a[i].first.first << " ";
 			}
 		}
 		cout << endl;
 	}
}
