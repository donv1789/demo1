#include<bits/stdc++.h>
using namespace std;
 
long long giaTri(int n)
{
    long long d,a=0,b=1;
 	if (n==1) return 1;
 	else
    {
    	for (int i=2;i<=n;i++)
    	{
			d=a+b;
			a=b;
			b=d;
		}
		return d;
	}
}

int main(){
	int u;
    cin >> u;
    for (int z=1; z<=u; z++){
        int n;
		cin>>n;
        long long a[n][n];
        int d=0, hang=n-1, cot=n-1,dem=1;
		while(d<=n/2){
			for(int i=d;i<=cot;i++) a[d][i]=giaTri(dem++);
			for(int i=d+1;i<=hang;i++) a[i][cot]=giaTri(dem++);
			for(int i=cot-1;i>=d;i--) a[hang][i]=giaTri(dem++);
			for(int i=hang-1;i>d;i--) a[i][d]=giaTri(dem++);
			d++; hang--; cot--;
		}
        cout<<"Test "<<z<<":"<<endl;
		for (int i=0; i<n; i++){
         	for (int j=0; j<n; j++) cout<<a[i][j]<<" ";
        	cout<<endl;
		}
    }
	return 0;
}

