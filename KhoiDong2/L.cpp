#include <iostream>

using namespace std;
typedef long long ll;

ll minElement(ll a[], int n) {
	ll m = a[0];
	for (int i = 1; i < n; ++i) {
		if (m > a[i])	m = a[i];
	}
	return m;
}

int main() {
	int n = 0;
	cin >> n;
	
	ll a[n], b[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i] >> b[i];
	}
	cout << minElement(a, n) * minElement(b, n) << endl;
	
	return 0;
}
