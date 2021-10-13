#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> t(m);
    multiset<int> h;

    for(int i = 0; i < n; i++){
        int k; cin >> k;
        k *= -1;
        h.insert(k);
    }
    for(int i = 0; i < m; i++) {
        cin >> t[i];
        t[i] *= -1; 
    } 
        


    for(auto x: t){
        auto k = h.lower_bound(x);
        if(k == h.end()){
            cout << -1 << "\n";
        }
        else{
            h.erase(k);
            cout << (-1 * *k) << "\n";
        }
    }

}
