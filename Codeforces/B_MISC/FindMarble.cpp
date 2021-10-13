#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, t;
    cin >> n >> s >> t;
    s--;
    t--;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i]--;
    }

    for(int i = 0; i < 1e6; i++){
        if(s == t){
            cout << i << "\n";
            return 0;
        }
        s = a[s];
    }
    cout << -1 << '\n';
}