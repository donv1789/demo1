#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		queue<long long> a;
		a.push(9);
		while(!a.empty()){
			long long x=a.front();
			a.pop();
			if(x%n==0){
				cout<<x;
				break;
			}
			a.push(x*10);
			a.push(x*10+9);	
		}	
		cout<<endl;		
	}
}
