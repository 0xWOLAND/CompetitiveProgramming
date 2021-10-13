#include <bits/stdc++.h>
using  namespace std;

typedef long long ll;

int main(){
    string a, b;
    cin >> a >> b;
    const ll n = a.length(), m = b.length();

    ll f[2][m + 1];
    f[0][0] = 0, f[1][0] = 0;

    for(int i = 0; i < m; i++){
        f[1][i + 1] = f[1][i];
        f[0][i + 1] = f[0][i];

        if(b[i] == '0'){
            f[0][i + 1]++;
        }
        else{
            f[1][i + 1]++;
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '0'){
            ans += f[1][m - (n - i) + 1] - f[1][i];
        }
        else{
            ans += f[0][m - (n - i) + 1] - f[0][i];
        }
    }
    cout << ans << "\n";
}
