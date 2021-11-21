#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,a[1001],b[1001][51],m,l;
	 long x=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){ 
		cin>>a[i];
	    a[i]= a[i]%k ;
	    x+=a[i];
	}
	m=x%k;
	if(m==0) cout<<n;
	else{
		for(int i=0;i<k;i++) b[0][i]=1001;
	    for(int i=1;i<=n;i++){ 
			for(int j=0;j<k;j++){ 
				if(j!=a[i]){ 
					l=j-a[i];
	        		if(l<0) l=l+k;
	        		if(b[i-1][l]+1>=b[i-1][j]) b[i][j]=b[i-1][j];
					else b[i][j]=b[i-1][l]+1;
	      		}
	      		else  b[i][j]=1;
	    	}
	  	}
	  	printf("%d",n-b[n][m]);
	}
	return 0;
}

