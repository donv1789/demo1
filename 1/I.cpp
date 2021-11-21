#include <iostream>
using namespace std;
 
int a[10];
int x[10], b[10];	// x[]: so, b[]: dau
int d[10];	// danh dau vi tri so da dung
bool res;
 
bool check(){
	int sum = x[1];
	for(int i=1; i<=4; i++){	// xet dau
		if( b[i] == 1 ) sum += x[i+1];
		else if( b[i] == 2 ) sum -= x[i+1];
		else sum *= x[i+1];
	}
	if( sum == 23 ) return true;
	return false;
}
 
void Try2(int i){
	for(int j=1; j<=3; j++){
		b[i] = j;
		if( res ) break;
		if( i < 4 ) Try2(i+1);
		else{	// tao du 1 day dau
			if( check() ) res = true;
		}
	}
}
 
void Try1(int i){	// tao 1 hoan vi so
	for(int j=1; j<=5; j++){
		if( res == false && d[j] == 0 ){
			x[i] = a[j];
			d[j] = 1;
			if( i < 5 ) Try1(i+1);
			else{	// tao du 1 hoan vi so
				Try2(1);	// bat dau tao dau de tinh
			}
			d[j] = 0;
		}
	}
}
 
void init(){
	for(int i=1; i<=5; i++){
		cin>>a[i];
		d[i] = 0;
	}
	res = false;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while( t-- ){
		init();
		Try1(1);
		if( res ) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
