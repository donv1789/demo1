#include<bits/stdc++.h>//yes
using namespace std;
int n;
vector<long>a;
void tach_sx(int l,int r){
    int m=(l+r)/2;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++){
        L[i]=a.at(l+i);
    }
    for(int j=0; j<n2; j++){
        R[j]=a.at(m+1+j);
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a.at(k)=L[i];
            i++;
        }
        else if(L[i]>=R[j]){
            a.at(k)=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a.at(k)=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a.at(k)=R[j];
        j++;
        k++;
    }
}
void mergeSort(int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(l,m);
        mergeSort(m+1,r);
    }
    tach_sx(l,r);
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        for(int i=0; i<n; i++) cin>>a.at(i);
        mergeSort(0,n-1);
        for(int i=0; i<n; i++) cout<<a.at(i)<<" ";
        cout<<endl;
    }
}
