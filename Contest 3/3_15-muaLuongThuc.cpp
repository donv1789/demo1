#include <iostream>
 
using namespace std;
 
void muaLuongThuc(int n, int s, int m) {
	if (m > n || n*(s - s/7) < s*m) { // n*(s -s/7) so luong thuc toi da dc lay trong s ngay.
		cout << -1; // chet doi
		return;
	}
 
	int kq = (s*m)/n;
	if ((s*m)%n != 0)
		kq++; // khi 1 ngay k du luong thuc thi lay them luong thuc vao ngay tiep
	cout << kq; // khi trong n ngay nhan du so luong thuc can song sot trong  lan lay
}
 
main (){
	int T, n, s, m; //n- so luong thuc max co the mua dc
	cin >> T;
	while(T--){
		cin >> n >> s >> m;
		muaLuongThuc(n, s, m);
		cout << endl;
	}
 
	return 0;
}
