#include<iostream>
#define MAX 10
using namespace std;
 
int n;
int cxet[MAX] = { 0 };
int A[MAX];
 
void xuat() {
    for (int i = 1; i <= n; i++)
        cout << A[i];
    cout <<" ";
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        if (!cxet[i]) {
            A[k] = i; 
            cxet[i] = 1;//Ðánh dau dã dùng
            if (k == n)//Kiem tra neu dã chua mot hoán vi thì xuat
                xuat();
            else
                Try(k + 1);
            cxet[i] = 0;
        }
    }
}
 
int main() {
    int t;
    cin>>t;
    while(t--){	
    	cin >> n;
    	Try(1);
    	cout<<endl;
	}
}

