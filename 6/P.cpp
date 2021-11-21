#include<bits/stdc++.h>

int A[1005][1005],n;

using namespace std;

int nguyen(string s,int bd,int kt)
{
    int sum = 0 ;
    for (int i=bd+1;i<kt;i++)
        sum  = sum*10+ (s[i]-'0');
    return sum;
}
void doc()
{
    int i=0,j;
    char c;
    scanf("%d",&n);
    while(i<=n)
    {
        string s;
        getline(cin,s);
        s= " " +s+ " ";
        int d=0;
        int pos = s.find(" ",d);
        while (1)
        {
            int next_pos = s.find(" ",pos+1);
            if (next_pos == string::npos) break;
            A[i][nguyen(s,pos,next_pos)]=1;
            pos =next_pos;
        }
        i++;
    }
}
void ghimatran()
{
    int i,j;
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
            if (i==j) printf("0 ");
        else
            printf("%d ",A[i][j]);
        printf("\n");
        }
}
int main()
{
    doc();
    ghimatran();
return 0;
}
