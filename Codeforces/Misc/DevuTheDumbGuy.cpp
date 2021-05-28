#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n, x;
    cin >> n >> x;

    ll a[n];
    for (ll i = 0; i < n && cin >> a[i]; i++);

    sort(a, a + n);

    ll ans = 0;

    for (int i = 0; i < n; i++){
        ans += (x * a[i]);
        x = max(1, x - 1);
    }
    cout << ans << "\n";
}