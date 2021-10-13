#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;

    for(int i = 0; i < n; i++){
        int k; cin >> k;
        if(1 <= k && k <= n){
            a.insert(k);
        }
    }

    cout << (n - a.size()) << "\n";


}