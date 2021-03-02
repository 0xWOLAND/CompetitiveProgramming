#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> prefix(n + 1);
    for (int i = 0; i < n; i++)
    {
        ll u;
        cin >> u;
        prefix[i + 1] = prefix[i] + u;
    }

    vector<ll> check(n);
    for (ll i = 0; i <= n; i++)
    {
        ll k = prefix[i];
        check[(k % n + n) % n]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += check[i] * (check[i] - 1) / 2;
    }
    cout << ans << "\n";
}