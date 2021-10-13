#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a,b;
    for(ll i = 0; i < n; i++){
        ll t; cin >> t;
        a.push_back(t);
    }
    for(ll i = 0; i < m; i++){
        ll t; cin >> t;
        b.push_back(t);
    }

    ll tot = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int l = 0, r = 0;

    while(l < n && r < m){
        if(abs(a[l] - b[r]) <= k){
            l++;
            r++;
            tot++;
        }
        else if(b[r] > a[l]){
            l++;
        }
        else{
            r++;
        }
    }
    cout << tot << "\n";
}
