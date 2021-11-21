#include<bits/stdc++.h>
using namespace std;
bool ok=true;


void out(char a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"\n";
}



bool nextString(char a[], int n){
	int i=n-1;
	while(a[i]!='A'&&i>=0){
		a[i]='A';
		i--;
	}
	if(i>=0) a[i]='B';
	else ok=false;
}

int main(){
	int n=0,k=0;
	cin>>n>>k;
	char a[n],b[n];
	for(int i=0;i<n;i++){
		a[i]='A';
		b[i]='A';
	}

	while(ok==true){
		
		nextString(a,n);
	}
	ok=true;
	
	while(ok==true){
		 out(b,n);
		nextString(b,n);
	}
	
}
