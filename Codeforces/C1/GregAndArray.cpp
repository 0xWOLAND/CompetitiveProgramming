#include "bits/stdc++.h"

using namespace std;

#define x first
#define y second
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) int((a).size())
#define sqr(x) ((x)*(x))
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define NAME "parades"
#define FREOPEN freopen(NAME".in", "r", stdin); freopen(NAME".out", "w", stdout);
#define Freopen freopen("29", "r", stdin); freopen("output.txt", "w", stdout);

typedef unsigned int unt;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef long double geom;

const ll MOD = 1e9 + 7;
const int INF = 2e9;
const ll INF64 = 9e18;
const ld EPS = 1e-12;
const ld PI = 3.1415926535897932384626433832795028841;
const ll MD = 925262732;
const ll T = 634521;
const int N = 200100;
const int M = 201;

int n, m, k
;ll a[N], x[N], y[N], dd[N], l1[N], r1[N], l[N], r[N];

int main()

 {   ios_base::sync_with_stdio(0);

    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> x[i] >> y[i] >> dd[i];
    forn(i, k)
    {
        int xx, yy;
        cin >> xx >> yy;
        l1[xx]++;
        r1[yy]++;
    }
    ll q = 0;
    for (int i = 1; i <= m; i++)
    {
        q += l1[i];
        l[x[i]] += q * dd[i];
        r[y[i]] += q * dd[i];
        q -= r1[i];
    }
    q = 0;
    for (int i = 1; i <= n; i++)
    {
        q += l[i];
        a[i] += q;
        q -= r[i];
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;

}

/*


*/
