#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
map<int, int> m;

bool check(int b){
	while (b>0){
		int tmp=b%10;
		if(tmp!=2 && tmp!=3 && tmp!=5 && tmp!= 7) return 0;
		b/=10;
	}
	return 1;
}

main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v;
	int tmp;
	while(cin>>tmp){
		if (check(tmp)){
			m[tmp]++;
			if(m[tmp]==1) v.push_back(tmp);
		}
	}
	for (int i=0; i<v.size(); i++) cout << v[i] << " " << m[v[i]] << endl;
}
