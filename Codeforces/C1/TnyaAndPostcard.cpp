#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[128], b[128];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    string s, t;
    cin >> s >> t;

    for(int i = 0; i < s.length(); i++){
        a[s[i]]++;
    }
    for(int i = 0; i < t.length(); i++){
        b[t[i]]++;
    }

    int x = 0, y = 0;

    for(int c = 'a', C = 'A'; c <= 'z' && C <= 'Z'; c++, C++){
        int k = min(a[c], b[c]), K = min(a[C], b[C]);
        x += k + K;
        a[c] -= k;
        b[c] -= k;
        a[C] -= K;
        b[C] -= K;
        y += min(a[c], b[C]) + min(a[C], b[c]);
    }
    cout << x << " " << y << "\n";
}