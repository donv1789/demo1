#include <iostream>
using namespace std;
#define vo_cuc 1000000007
int n,k ;
long long f[100005],bac[100005];
int main(){
    int t;
	cin>>t;
    f[0]=bac[0]=1;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            if(i-k>0) f[i]=(bac[i-1]-bac[i-k-1]+vo_cuc)%vo_cuc;
            else f[i]=bac[i-1];
            bac[i]=(f[i]+bac[i-1])%vo_cuc;
        }
        cout<<f[n]<<endl;
    }
    return 0;
}
