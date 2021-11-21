#include<iostream>
#include<string.h>
#define MAX 10
using namespace std;
 
int n;
char A[MAX];
 
void xuat() {
    for (int i = 1; i<=n; i++)
        cout << A[i];
    cout <<" ";
}
 
void Try(int k) {
	 for (char i = 'A'; i <= 'B'; i++) {
    
        A[k] = i; 
        
        if (k == n)//Kiem tra neu dã chua mot hoán vi thì xuat
            xuat();
        else
            Try(k + 1);

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

