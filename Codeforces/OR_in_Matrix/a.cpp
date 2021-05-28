#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool a[n][m], b[a][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
            a[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!b[i][j]){

            }
        }
    }
}
