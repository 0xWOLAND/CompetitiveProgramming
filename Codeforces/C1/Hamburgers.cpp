#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool can(ll tests, vector<ll> cnt, vector<ll> n, vector<ll> p, ll r){
    for(int i = 0; i < 3; i++){
        cnt[i] *= tests;
    }
    for(int i = 0; i < 3; i++){
        ll cost = (cnt[i] - n[i]) * p[i];
        if(cost > r){
            return false;
        }
        else{
            if(cost > 0){
                r -= cost;
            }
        }
    }
    return true;
}

int main()
{
    vector<ll> cnt(3), n(3), p(3);
    ll r; 
    string s;
    cin >> s;


    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'B'){
            cnt[0]++;
        }
        else if(s[i] == 'S'){
            cnt[1]++;
        }
        else if(s[i] == 'C'){
            cnt[2]++;
        }
    }
    for(int i = 0; i < 3; i++) cin >> n[i];
    for(int i = 0; i < 3; i++) cin >> p[i];

    cin >> r;

    ll lo = 0, hi = r;
    ll mid;
    for(int i = 0; i < 3; i++){
        hi += n[i];
    }
    while(lo < hi){
        mid = (lo + hi + 1) / 2;
        if(can(mid, cnt, n, p, r)){
            lo = mid;
        }
        else{
            hi = mid - 1;
        }
    }
    cout << lo << "\n";
}