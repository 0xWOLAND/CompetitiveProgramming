#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;

    for(int i = 1; i < n; i++){
        if(a[i] + a[i - 1] < k){
            ans += k - a[i] - a[i - 1];
            a[i] = k - a[ i - 1];
        }
    }
    cout << ans << "\n";

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}   