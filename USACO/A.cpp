#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
#define f first
#define s second


int n, k;


int main() {
    cin >> n >> k;
    vector<int> cows(n);
    vector<pi> moves(k);
    set<int> vis[n];

    for(int i = 0; i < n; i++){
        cows[i] = i;
    }

    for(int i = 0; i < k; i++){
        int u, v;
        cin >> u >> v;
        moves[i] = make_pair(u - 1, v - 1);
    }

    for(int s = 0; s < n * n; s++){
        for(int i = 0; i < n; i++){
            cout << cows[i] << " ";
            vis[cows[i]].insert(i);
        }
        cout << "\n";

        swap(cows[moves[s % k].f], cows[moves[s % k].s]);
    }
    for(int i = 0; i < n; i++){
        cout << vis[i].size() << "\n";
    }
}
