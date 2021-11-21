#include <iostream>
#include <queue>
using namespace std;

queue <int> q[1005];

void cut(string s, int row){
	int n = s.size(), flag = 0, col = 0;	// gap khoang trang
	for(int i=0; i<n; i++){
		if( s[i] != ' ' ){	// tao so
			if( !flag ) flag = 1;
			col = col * 10 + ( s[i] - 48 );
		}
		else if( flag == 1 ){	// gap khoang trang va truoc do dang tao so
			flag = 0;
			q[row].push(col);
			col = 0;
		}
		if( i == n-1 && col != 0 ) q[row].push(col);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cin>>n;
	cin.ignore();
	for(int i=1; i<=n; i++){
		s = "";
		getline(cin, s);
		cut(s, i);
	}
	for(int i=1; i<=n; i++){
		while( !q[i].empty() ){
			if( q[i].front() > i ) cout<<i<<" "<<q[i].front()<<"\n";
			q[i].pop();
		}
	}
}
