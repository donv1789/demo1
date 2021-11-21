#include<stdio.h>
#include<iostream>

using namespace std;
const int maxn=1814400+10;
int Se[876550][30];

struct hexg
{
	int a[10];
	int f,l,c;
};
hexg hgx, hgo;
hexg queue[maxn];

bool Xet(int _f, int _l)
{
	int j=1;
	while(j<=Se[_f][0]&&Se[_f][j]!=_l) j++;
	if(j>Se[_f][0])
    {
		Se[_f][0]++;
		Se[_f][j]=_l;
		return true;
	}
	else return false;
}

bool SoSanh(hexg hgA, hexg hgB)
{
	int j=0;
	while(j<10&&hgA.a[j]==hgB.a[j]) j++;
	if(j==10) return true;
	else return false;
}

hexg R(hexg h)
{
	hexg k;
	k.a[0]=h.a[0];k.a[3]=h.a[3];k.a[7]=h.a[7];k.a[5]=h.a[5];
	k.a[1]=h.a[4];k.a[2]=h.a[1];k.a[6]=h.a[2];
	k.a[9]=h.a[6];k.a[8]=h.a[9];k.a[4]=h.a[8];
	k.f=k.l=0;
	for(int i=0; i<10; i++)
    {
		if(i<=5) k.f=k.f*10+k.a[i];
		else k.l=k.l*10+k.a[i];
	}
	return k;
}

hexg L(hexg h)
{
	hexg k;
	k.a[2]=h.a[2];k.a[6]=h.a[6];k.a[9]=h.a[9];k.a[4]=h.a[4];
	k.a[0]=h.a[3];k.a[1]=h.a[0];k.a[5]=h.a[1];
	k.a[8]=h.a[5];k.a[7]=h.a[8];k.a[3]=h.a[7];
	k.f=k.l=0;
	for(int i=0; i<10; i++)
    {
		if(i<=5) k.f=k.f*10+k.a[i];
		else k.l=k.l*10+k.a[i];
	}
	return k;
}

int BFS()
{
	int kq;
	int qhead=1, qtail=1;
	queue[qtail]=hgx;
	while(qhead<=qtail)
    {
		hexg hg=queue[qhead], hgL, hgR;
		qhead++;
		hgL=L(hg);
		hgR=R(hg);
		if(Xet(hgL.f, hgL.l))
		{
			qtail++; hgL.c=hg.c+1;
			queue[qtail]=hgL;
			if(SoSanh(hgL,hgo))
			{
				kq=hgL.c;
				break;
			}
		}
		if(Xet(hgR.f, hgR.l))
		{
			qtail++; hgR.c=hg.c+1;
			queue[qtail]=hgR;
			if(SoSanh(hgR,hgo))
			{
				kq=hgR.c;
				break;
			}
		}
	}
	return kq;
}

int main()
{
	int t;
	hgx.f=hgx.l=0;
	for(int ii=0; ii<=880; ii++)
		Se[ii][0]=0;
	for(int i=0; i<10; i++)
    {
		scanf("%d",&t);
		hgx.a[i]=t;
		if(i<=5) hgx.f=hgx.f*10+t;
		else hgx.l=hgx.l*10+t;
	}
	Se[hgx.f][0]=1; Se[hgx.f][1]=hgx.l;
	hgo.a[0]=1;hgo.a[1]=2;hgo.a[2]=3;
	hgo.a[3]=8;hgo.a[4]=0;hgo.a[5]=0;hgo.a[6]=4;
	hgo.a[7]=7;hgo.a[8]=6;hgo.a[9]=5;
	hgx.c=0;
	if(SoSanh(hgx,hgo))
	{
		printf("0"); return 0;
	}
	int ans=BFS();
	printf("%d",ans);
	return 0;
}
