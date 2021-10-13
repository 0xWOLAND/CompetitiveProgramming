#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    bool h[1000000];
    memset(h, 0, sizeof(h));
    for( long long i = 0; i < m; i++){
        int pos = 0;
        cin >> pos;
        h[pos] = 1;
    }

    int cur = 1;
    while(k--){
        int u, v;
        scanf("%d %d", &u, &v);
        if(!h[u] && u == cur){
            cur = v;
        }
        else if(!h[v] && v == cur){
            cur = u;
        }
    }
    cout << cur << "\n";
}   