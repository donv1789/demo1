#include<bits/stdc++.h>//yes
using namespace std;
int n, a[100];
void sxnoibot(){
    int dem=1;
    for(int i=0 ;i<n-1; i++){
        bool t=0;
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                t=1;
            }
        }
        if(t){
            cout<<"Buoc "<<dem++<<": ";
            for(int i=0 ;i<n; i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}
int main(){
        cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];
        sxnoibot();
}
