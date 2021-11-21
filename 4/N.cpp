#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;

int solve(int n, int k) 
{ 
  	if (n == 1) return 1; 
  	else return (solve(n - 1, k) + k-1) % n + 1; 
} 

int main() 
{ 
  	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 	int t;
  	cin>>t;
   	while (t--){
   		int n,k;
   		cin>>n>>k;
		cout<<solve(n, k+1)<<endl;	
	} 
  	return 0; 
} 













//Josephus problem :)) cong thuc ma trien can gi danh sach lien ket
