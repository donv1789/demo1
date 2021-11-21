#include <bits/stdc++.h>
using namespace std;
 
string s;
long long n;
long long F[100000000];
#define MAX 1000000000000000000
 
char solve(int i){
    if (i==0) return s[n-1];
    long long tmp = F[i]/2;
    if (tmp>=n) return solve(i-1);
    else {
        n-=tmp;
        n--;
        if (n==0) n=tmp;
        return solve(i-1);
    }
}
 
void build(){
    F[0]=s.length();
    int i=1;
    while (F[i-1]<=MAX/2){
        F[i] = 2*F[i-1];
        i++;
    }
}
 
int main() {
    cin>>s>>n;
    build();
    int i=0;
    while (n>F[i]) i++;
    cout<<solve(i);
    return 0;
}
