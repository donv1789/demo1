#include <iostream>
#define MAX 15

using namespace std;

int n;
int k;
int x[MAX] ;

void in(){
	for(int i=1; i <= k; i++)
		cout<<x[i];	
	cout<<" ";
}
void Try(int i){ 
	for(int j=x[i-1]+1; j <= (n-k+i); j++){
		x[i] = j;
		if(i == k)
			in();
		else
			Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		cout<<endl;
	}	
	return 0;
}
