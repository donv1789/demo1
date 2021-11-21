#include<bits/stdc++.h>
using namespace std;
long long P,Q;
long long x;
void phanso(){
	while(1){
		if(Q%P==0){
			cout<<"1/"<<Q/P<<endl;
			break;
		} 
		else{
			x= Q/P + 1;
			cout<<"1/"<<x<<" + ";
			P=P*x-Q;
			Q=Q*x;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>P>>Q;
		phanso();
	}
	return 0;
}
