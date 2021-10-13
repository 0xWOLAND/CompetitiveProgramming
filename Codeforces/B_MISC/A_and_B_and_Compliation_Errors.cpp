#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    int k = 0;

    for(int i = 0; i < n; i++){
        int u; cin >> u;
        k += u;
    }

    for(int T = 1; T <= 2; T++){
        int j = 0;
        for(int i = 0; i < n - T; i++){
            int u; cin >> u;
            j += u;
        }
        cout << k - j << "\n";
        k = j;
    }
}