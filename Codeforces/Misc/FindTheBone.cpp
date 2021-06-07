#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    bool h[(int)(1e6)];
    memset(h, 0, sizeof(h));

    for (int i = 0; i < m; i++){
        int t;
        cin >> t;
        h[t] = 1;
    }
    int pos[(int)(1e6)];
    memset(pos, -1, sizeof(pos));
    for (int i = 0; i < k; i++)
    {
        int u, v;
        cin >> u >> v;
        pos[u] = v;
    }
    int cur = 1;
    
    while(cur != -1 && !h[cur]){
        cout << cur << "\n";
        if(pos[cur] == -1){
            cout << cur << "\n";
            return 0;
        }
        cur = pos[cur];
    }
}