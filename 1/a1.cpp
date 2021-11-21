#include<bits/stdc++.h>
using namespace std;
int test,n,k,x[17];
void Init(){
	cin>>n>>k;
}

bool check(){
	int count=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1)count++;
	}
	if(count==k) return true;
	return false;
	
}

void result(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
		
	}cout<<endl;
	
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
		
			if(check()==true)
				result();
		}
		else Try(i+1);
	}
	
}
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>test;
	while(test--){
		Init();
		Try(1);
		
	}
}
