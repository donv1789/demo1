#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const int MOD = (int)1e9+7;
const bool MULTI_TEST = true;
using namespace std;

int r,c;
int a[505][505];
int mark[505][505];
int dX[] = {-1,-1,-1,0,0,1,1,1};
int dY[] = {-1,0,1,-1,1,-1,0,1};

void bfs (int x, int y){
    mark[x][y] = 1;
    queue <pii> q;
    q.push(pii(x,y));
    while(!q.empty()){
        auto t = q.front();
        q.pop();
        for(int i=0;i<8;i++){
            x = t.first + dX[i];
            y = t.second + dY[i];
            if(x > 0 && x <= r && y > 0 && y <= c && mark[x][y] == 0 && a[x][y] == 1){
                mark[x][y] = 1;
                q.push(pii(x,y));
            }
        }
    }
}

void solve(){
	cin >> r >> c;
    for(int i=1;i<=r;i++) for(int j=1;j<=c;j++) cin >> a[i][j],mark[i][j] = 0;
    int cnt = 0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(mark[i][j] == 0 && a[i][j] == 1){
                cnt ++;
                bfs(i,j);
            }
        }
    }
    cout << cnt << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

