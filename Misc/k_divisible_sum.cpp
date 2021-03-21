#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int tmp = k;
        while(k < n) k += tmp;
        int ans = 0;
        while(k > 0){
            ans++;
            k -= n;
        }
        cout << ans << "\n";


    }

}
