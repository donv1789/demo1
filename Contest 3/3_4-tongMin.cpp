#include <iostream>
#include <algorithm>
using namespace std;
int a[20], b[20],c[20],n;
long long taoso(){
    int x=0,k=0;
    for(int i=0; i<n; i++){
        if(a[i]<0 || a[i]>9)
            return 0;
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(i%2==0){
            b[x]=a[i];
            x++;
        }
        else if(i%2==1){
            c[k]=a[i];
            k++;
        }
    }
    long long so1=0, so2=0;
    for(int j=0; j<=x-1; j++){
        so1 = so1*10+b[j];
    }
    for(int m=0; m<=k-1; m++){
        so2 = so2*10+c[m];
    }
    return so1+so2;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];
        cout<<taoso()<<endl;
    }
}
