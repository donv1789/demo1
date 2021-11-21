#include<bits/stdc++.h>
using namespace std;
int n,k, x[1000];
void toHop_next(){
    int i=k;
    while(i>0 && x[i]==n-k+i) i--;
    if(i>0){
        x[i]=x[i]+1;
        for(int j=i+1; j<=k; j++){
            x[j]=x[j-1] +1;
        }
    }
    else{
        for(int i=1; i<=k; i++) x[i]=i;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1; i<=k; i++) cin>>x[i];
        toHop_next();
        for(int i=1; i<=k; i++) cout<<x[i]<<" ";
        cout<<endl;
    }
    return 0;
}

