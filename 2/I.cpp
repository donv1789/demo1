#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define REP(i, a, b) for(int i = (a); i <=(b); i++)
#define FORD(i, a, b) for(int i = (a); i > (b); i--)
#define REPD(i, a, b) for(int i = (a); i >=(b); i--)
#define TR(it, a) for(typeof((a).begin()) it = (a).begin(); it != (a).end(); ++it)
#define RESET(a, v) memset((a), (v), sizeof((a)))
#define SZ(a) (int((a).size()))
#define ALL(a) (a).begin(), (a).end()
#define PB push_back
#define MP make_pair
#define LL long long
#define LD long double
#define II pair<int, int>
#define X first
#define Y second
#define VI vector<int>
const int N = 100005;
using namespace std;
 
typedef pair<double, double> point;
typedef pair<double, int   > rec;
 
set<rec> S;
point a[N];
int n;
 
#define sqr(a) ((a) * (a))
double dist(const point &a, const point &b)
    {return sqrt(sqr(a.X - b.X) + sqr(a.Y - b.Y));}
 
int main() {
    ios :: sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
		cin >> n;
	    FOR(i, 0, n) cin >> a[i].X >> a[i].Y;
	    sort(a, a + n);
	    int j = 0; double ans = 1e9;
	    FOR(i, 0, n) {
	        while (a[i].X - a[j].X > ans) {
	            S.erase(S.find(MP(a[j].Y, j)));
	            j++;
	        }
	        set<rec> :: iterator it = S.lower_bound(MP(a[i].Y - ans, 0));
	        set<rec> :: iterator ed = S.upper_bound(MP(a[i].Y + ans, 0));
	        while (it != ed) {
	            ans = min(ans, dist(a[i], a[it -> Y]));
	            ++it;
	        }
	        S.insert(MP(a[i].Y, i));
	    }
	    cout << setprecision(6) << fixed << ans<<endl;
//	    FOR(i, 0, n){
//	    	a[i].X=0;
//			a[i].Y=0;
//		}
	}
    return 0;
}
