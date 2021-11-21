#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test ;
  
    cin>>test ;
    for(int t= 0 ;  t<test ; t++ )
    {
		int stt ; 
		string so;
		cin>>stt>>so;
        int i = so.length() - 2 ;
        while ( so[i] >= so[i+1] ) 
        {
            i-- ;
        }
        if(i== -1) 
        {
            for(int i=1;i<=stt;i++)
            	cout<<i;
            cout<<endl;
        }
        else 
        {
            int big = 0 ;
            char min = '9' ;
            int imin = i ;
            for(int  k = i+1 ; k<so.size() ; k++) 
            {
               if(so[k] > so[i] && so[k] <=min ) 
               {
                    min = so[k] ;
                    imin = k ;
               }
            }
            char temp = so[i] ;
            so[i] = so[imin] ;
            so[imin] = temp ;
            for(int k = i+1 ; k<so.size() -1  ; k++) 
            {
                for(int j = k+1 ;  j <so.size() ; j++) 
                {
                    if(so[k] > so[j]) 
                    {
                        swap( so[k], so[j] );
                    }
                }
            }
                cout<<so<<endl ;
        }

    }
    return 0;
}
