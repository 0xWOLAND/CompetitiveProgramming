#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    int a[n][m];
    int ans = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c; cin >> c;
            if(c == '.'){
                a[i][j] = 0;
            }
            else{
                a[i][j] = 1;
            }
        }
    }

    for(int i = 0; i < m; i++){
        int k = 0;
        for(int j = 0; j < n; j++){
            k += a[i][j];
        }
        ans = max(k, n - k);
    }
    cout << ans << "\n";
}