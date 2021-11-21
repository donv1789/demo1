#include<bits/stdc++.h>
using namespace std;
int test, n, x[17];
int INit() {
	cin >> n;
}
//bool check() {
//	int count = 0;
//	for(int i = 1 ; i <= n ; i++) {
//		if(x[i] == 1) count++;
//	}
//	if(count == k) return true;
//	return false;
//}
void reSult() {
	
	for(int i = 1 ; i <= n ; i++) 
		cout << x[i] ;
	cout << endl;
}
void Try(int i) {
	for(int j = 0 ; j <= 1 ; j++) {
		x[i] = j ;
		if(i==n ) {
//			if(check())
				reSult();
		}
		else Try(i+1); 
	}
}
int main()
{
 	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> test;
	while(test--) {
		INit();
		Try(1);
	}


}






