#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, r, avg;
    cin >> n >> r >> avg;
    pair<ll, ll> a[n];
    ll sum = 0, tot = n * avg;
    for(int i = 0; i < n; i++){
        cin >> a[i].second >> a[i].first;
        sum += a[i].second;
    }

    sort(a, a + n);
    ll ans = 0;
    for(int i = 0; i < n && tot > sum; i++){
        ll k = min(tot - sum, r - a[i].second);
        ans += k * a[i].first;
        sum += k; 
    }

    cout << ans << "\n";

}