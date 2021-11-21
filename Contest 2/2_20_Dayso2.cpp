#include<bits/stdc++.h>//yes
using namespace std;
void tinh(int a[], int n){
    if (n < 1)  return;
    int b[n];
    for(int i=0; i<n; i++){
        int sum = a[i]+a[i+1];
        b[i]=sum;
    }
    tinh(b,n-1);
    cout<<"[";
    for(int i=0; i<n; i++){
        if(i==n-1)  cout<<a[i]<<"]";
        else cout<<a[i]<<" ";
    }
    cout<<" ";
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++)  cin>>a[i];
        tinh(a,n);
    }
}
