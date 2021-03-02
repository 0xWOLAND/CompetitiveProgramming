#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;

    vector<ll> arr(n + 1);
    ll high = -1, idx = 0;
    for (int i = 0; i < n; i++)
    {
        ll u;
        cin >> u;
        arr[i + 1] = arr[i] + u;
        high = max(high, arr[i + 1]);
        idx = i + 1;
    }
    ll ans = arr[0];

    for(int i = 1; i < idx; i++){
        ans = max(ans, high - arr[i]);
    }
    cout << ans << "\n";
}