#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nCr(ll n){
    ll top = 1, bot = 1;
    for(ll i = 1; i <= n; i++){
        top *= i;
    }
    for(ll i = 1; i <= n - 2; i++){
        bot *= i;
    }
    bot *= 2;

    return top / bot;
}
struct Point{
    ll px, py;
};
int main() {
    ll n;
    cin >> n;

    map<ll, ll> x, y;
    set<Point> st;
    for(ll i = 0; i < n; i++){
        ll u, v;
        cin >> u >> v;
        x[u]++;
        y[v]++;
        st.insert({u, v});
    }
    ll ans = 0;
    for(auto a: x){
        ans += nCr(a.second);
    }
    for(auto a: y){
        ans += nCr(a.second);
    }
    ans -= (n - st.size());
    cout << ans << "\n";
}









