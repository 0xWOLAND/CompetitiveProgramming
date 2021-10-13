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
#define NAME "demo"
#define FREOPEN freopen(NAME".in", "r", stdin); freopen(NAME".out", "w", stdout);
#define Freopen freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

typedef unsigned int unt;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef double geom;

const ll MOD = 1e9 + 7;
const int INF = 2e9;
const ll INF64 = 7e18;
const ld EPS = 1e-9;
const ld PI = 3.14159265358979310000;
const ll MD = 535355424;
const ll T = 34539;
const int N = 300101;
const int M = 501;

int n, a[N], b[N], aa[N], bb[N];

int main()
{
    //FREOPEN;
    //Freopen;
    cin >> n;
    forn(i, n)
        scanf("%d %d", &a[i], &b[i]);
    forn(i, n / 2)
        aa[i] = bb[i] = 1;
    int i = 0, j = 0;
    while (i + j < n)
    {
        if (a[i] < b[j])
        {
            aa[i] = 1;
            i++;
        }
        else
        {
            bb[j] = 1;
            j++;
        }
    }
    forn(i, n)
        printf("%d", aa[i]);
    cout << endl;
    forn(i, n)
        printf("%d", bb[i]);


    return 0;
}


/*




*/
