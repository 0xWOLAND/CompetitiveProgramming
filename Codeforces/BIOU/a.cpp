#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    for(int i = 0; i < m; i++){
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        a[u] -= w;
        a[v] += w;
    }

    int ans = 0;

    for(int i = 0; i <= n; i++){
        ans += max(0, a[i]);
    }
    cout << ans << "\n";

    return 0;
}
