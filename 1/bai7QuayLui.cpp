#include<bits/stdc++.h>

using namespace std;

void xuLy(int n, int X[], int T[], int i)
{
    int j;
    for(j = X[i - 1]; j <= (n - T[i - 1]); j++)  // X[i-1] <= X[i] <= n - T[i-1]
    {
        X[i] = j;
        T[i] = T[i - 1] + j;
 
        if(T[i] == n)   // n?u T[i] = n
        {	
        	cout<<"(";
            int temp;
            for(temp = 1;  temp <= i; temp++)   // in ra t? X[1] t?i X[i]
            {
            
				cout<<" "<<X[temp]<<" ";
            }
            cout<<")"<<" ";
        }
 
        else
        {
            xuLy(n, X, T, i + 1);
        }
    }
}
int main()
{
    int n,test;
    cin>>test;
    while(test--){
    	cin>>n;
 
    	int X[n + 1];  // m?ng X có N + 1 ph?n t?
   		int T[n + 1];
 
    	X[0] = 1;
    	T[0] = 0;
 
    	xuLy(n, X, T, 1);  // m?ng nghi?m tính t? i = 1
    	cout<<endl;
	}
 

    return 0;
}
