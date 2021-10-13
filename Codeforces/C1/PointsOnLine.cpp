#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <map>
#include <set>
#include <memory.h>
#define sz(x) int((x).size())
#define FOR(i,a,b) for(ll(i) = (a); (i) <= (b); ++(i))
#define ROF(i,a,b) for(ll(i) = (a); (i) >= (b); --(i))
#define rep(i,n) for (ll(i) = 0; (i) < (n); ++(i))
#define fe(i,a) for (ll(i) = 0; (i) < int((a).size()); ++(i))
#define C(a) memset((a),0,sizeof(a))
#define pb push_back
#define ppb pop_back
#define all(c) (c).begin(), (c).end()
#define sqr(a) (a)*(a)
#define mp(a,b) make_pair((a), (b))
#define X first
#define Y second
#define file freopen("input.txt","r",stdin)
#define file2 freopen("output.txt", "w",stdout)
using namespace std;
typedef vector<int> vint;
typedef long long ll;
typedef pair<int, int> pii;
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
#define mod 1000000007
#define inf 1000000000
const int N = 100005;
ll n, d;
double a[N];
int main()
{
    cin >> n;
    cin >> d;
    rep(i, n) scanf("%lf",&a[i]);
    ll i = 0;
    ll j = 0;
    ll ans = 0;
    while(j < n){
        if(a[j] - a[i] <= d){
            ans += (((j - i) * (j - i - 1)) / 2);
            ++j;
        }
        else{
            ++i;
        }
    }
    cout << ans << endl;
}
