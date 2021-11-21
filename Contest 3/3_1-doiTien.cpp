#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10]={1,2,5,10,20,50,100,200,500,1000};

	int t; cin>>t;
	int S;
	while(t--){
		cin>>S; //so tien
		int soTo=0;
		for(int i=9; i>=0; i--){
			soTo+=S/a[i];
			S=S%a[i];
		}
		cout<<soTo<<endl;
	}
}
