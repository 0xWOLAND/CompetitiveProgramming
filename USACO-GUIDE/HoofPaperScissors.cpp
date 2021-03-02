#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    vector<int> h(n + 1), p(n + 1), s(n + 1);

    for(int i = 0; i < n; i++){
        h[i + 1] = h[i];
        p[i + 1] = p[i];
        s[i + 1] = s[i];
        cin >> c;
        if(c == 'H') h[i + 1]++;
        if(c == 'P') p[i + 1]++;
        if(c == 'S') s[i + 1]++;
    }

    int ans = 0;

    for(int i = 0; i <= n; i++){
        int H = h[n] - h[i];
        int P = p[n] - p[i];
        int S = s[n] - s[i];

        ans = max(ans, H + p[i]);
        ans = max(ans, H + s[i]);
        ans = max(ans, P + h[i]);
        ans = max(ans, P + s[i]);
        ans = max(ans, S + p[i]);
        ans = max(ans, S + h[i]);
        
    }
    cout << ans << "\n";
}