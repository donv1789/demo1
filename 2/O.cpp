#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
#define ll long long

ll tri(ll x, ll y)
{
	if(x>y)return x-y;
	return y-x;
}
main()
{
	ll n;
	cin>>n;
	ll *a = new ll[n+1];
	for(ll i=1;i<=n;i++)
	scanf("%lld",&a[i]);
	
	ll *sumLR = new ll[n+1];
	ll *viLR = new ll[n+1];
	ll *aLR = new ll[n+1];
	ll *aRL = new ll[n+1];
	ll nLR = 0;
	ll res = -1;
	for(ll i=1;i<=n;i++)
	{
		nLR = 0;
		for(ll j=1;j<=n;j++){
			nLR++;
			aLR[nLR]=tri(i,j)+a[j];
		}
		sort(&aLR[1],&aLR[nLR+1]);
		viLR[0]=0;
		sumLR[0]=0;
		ll vLR = 1;
		ll tLR = aLR[1];
		viLR[1] = 1;
		sumLR[1] = aLR[1];
		aRL[1] = aLR[1];
		for(ll j=2;j<=nLR;j++){
			if(aLR[j]==tLR)
			{
				sumLR[vLR]+=tLR;
				viLR[vLR]++;
			}
			else
			{
				vLR++;
				sumLR[vLR]=sumLR[vLR-1]+aLR[j];
				viLR[vLR] = viLR[vLR-1]+1;
				aRL[vLR]=aLR[j];
				tLR=aLR[j];
			}
		}
		ll st = tri(i,1)+1;
		if(st<tri(i,n)+1)
		{
			st=tri(i,n)+1;
		}
		
		if(aRL[vLR]<=st){
			if(res==-1)
			{
				res = st*viLR[vLR]-sumLR[vLR];
			}
			else
			{
				if(res>st*viLR[vLR]-sumLR[vLR]){
					res = st*viLR[vLR]-sumLR[vLR];
				}
			}
		}else{
			ll vj = 1;
			for(ll j=1;j<vLR;j++){
				if(st>=aRL[j] && st<= aRL[j+1]){
					vj = j;
					break;
				}
			}

			for(ll j=vj;j<vLR;j++){
				if(st>=aRL[j]){
					if(res==-1){
						res = sumLR[vLR]-2*sumLR[j]+2*st*viLR[j]-st*viLR[vLR];
					}
					else
					{
						if(res>sumLR[vLR]-2*sumLR[j]+2*st*viLR[j]-st*viLR[vLR]){
							res = sumLR[vLR]-2*sumLR[j]+2*st*viLR[j]-st*viLR[vLR];
						}
					}
					if(aLR[j+1]-1>st){
						if(res==-1){
							res = sumLR[vLR]-2*sumLR[j]+2*(aRL[j+1]-1)*viLR[j]-(aRL[j+1]-1)*viLR[vLR];
						}
						else
						{
							if(res>sumLR[vLR]-2*sumLR[j]+2*(aRL[j+1]-1)*viLR[j]-(aRL[j+1]-1)*viLR[vLR]){
								res = sumLR[vLR]-2*sumLR[j]+2*(aRL[j+1]-1)*viLR[j]-(aRL[j+1]-1)*viLR[vLR];
							}
						}
					}
				}
				else{
					if(res==-1){
						res = sumLR[vLR]-2*sumLR[j]+2*aRL[j]*viLR[j]-aRL[j]*viLR[vLR];
					}
					else
					{
						if(res>sumLR[vLR]-2*sumLR[j]+2*aRL[j]*viLR[j]-aRL[j]*viLR[vLR]){
							res = sumLR[vLR]-2*sumLR[j]+2*aRL[j]*viLR[j]-aRL[j]*viLR[vLR];
						}
					}
					
					if(res==-1){
						res = sumLR[vLR]-2*sumLR[j]+2*(aRL[j+1]-1)*viLR[j]-(aRL[j+1]-1)*viLR[vLR];
					}
					else
					{
						if(res>sumLR[vLR]-2*sumLR[j]+2*(aRL[j+1]-1)*viLR[j]-(aRL[j+1]-1)*viLR[vLR]){
							res = sumLR[vLR]-2*sumLR[j]+2*(aRL[j+1]-1)*viLR[j]-(aRL[j+1]-1)*viLR[vLR];
						}
					}
					
				}
			}
			
			if(res==-1)
			{
				res = aRL[vLR]*viLR[vLR]-sumLR[vLR];
			}
			else
			{
				if(res>aRL[vLR]*viLR[vLR]-sumLR[vLR]){
					res = aRL[vLR]*viLR[vLR]-sumLR[vLR];
				}
			}
			
		}
	}
	
	cout<<res<<endl;
}
