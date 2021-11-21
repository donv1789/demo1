#include<bits/stdc++.h>
#define FORU(i,a,b) for(int i = a;i <= b;i++)
#define FORD(i,a,b) for(int i = a;i >= b;i--)
#define ll long long
#define Mod 1000000007
using namespace std;
struct matran{
    long long a[3][3];
    matran(){
        for(int i = 0; i < 3;i++)
            for(int j = 0;j < 3;j++) a[i][j] = 0;
    }
};
matran operator *(const matran A,const matran B){
    matran C;
    for(int i = 0; i < 3;i++)
        for(int j = 0;j < 3;j++){
            C.a[i][j] = 0;
            for(int k = 0;k < 3;k++){
                C.a[i][j] += (A.a[i][k] * B.a[k][j]) % Mod;
            }
        }
    return C;
}
matran mu(matran A,long long n){
    if (n <= 1) return A;
    matran C = mu(A,n / 2);
    if (n % 2 == 0) return C * C;
    else return C * C * A;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		matran I,F0;
		I.a[0][0] = 0;
		I.a[0][1] = I.a[1][0] = I.a[1][1] = 1;
		F0.a[0][1] = 1;
		F0.a[0][0] = F0.a[1][0] = F0.a[1][1] = 0;
		matran F;
	    if (n > 0) F = F0 * mu(I,n);
		cout << F.a[0][0]<<endl;
	}
	return 0;
}


