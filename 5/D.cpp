#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int snt[N+1];

void sangnt(){
    for(int i=1; i<=N; i++) snt[i]=1;
    snt[1]=0;
    int i=2;
    while(i*i<=N){
        while(snt[i]==0) i++;
        for(int j=2; j*i<=N; j++) snt[i*j]=0;
        i++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sangnt();
    int t;
    cin>>t;
    for(int k=0; k<t; k++){
        int begin,end;
        cin>>begin>>end;
        vector<int> level(N+1,-1);
        queue<int> q;
        level[begin]=0;
        q.push(begin);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            string s=to_string(u);
            for(int i=0; i<4; i++){
                for(int j=0;j<=9;j++){
                    string temp=s;
                    temp[i]=j+'0';
                    int num=stoi(temp);
                    if(num>=1000 && snt[num] && level[num]==-1){
                        level[num]=level[u]+1;
                        q.push(num);
                    }
                }
            }
        }
        cout<<level[end]<<endl;
    }
    return 0;
}
