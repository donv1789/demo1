#include <iostream>
using namespace std;
int a[35], x[35], n, S, smin=32, dem=0;
void Try(int S, int i){
	if(S==0 && dem<smin) {
		smin=dem;
	}
	if(i>n || S==0){

		return;
	}
	for(int j=1;j>=0;j--){
		x[i]=j;
		if(S-a[i]*x[i]>=0){
			if(j) ++dem;
			Try(S-a[i]*x[i], i+1);
			if(j) --dem;
		}
	}
}
int main(){

	int test;
	cin>>test;
	while(test--){
		cin>>n>>S;	
		for(int i=1;i<=n;i++) cin>>a[i];
//		dem=0;
		Try(S,1);
		if(smin==32||smin==0){
			cout<<-1<<endl;
		}
		else{
			cout<<smin<<endl;
		}
		dem=0;
		smin=32;
//		cout<<smin;
	}
	return 0;
}

