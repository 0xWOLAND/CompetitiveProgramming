#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    long long a[n];
    long long tot = 0;
    for(long long i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(long long i = 0; i < n; i++){
        if(tot + 1 < a[i]){
            cout << tot + 1 << "\n";
            return 0;
        }
        tot += a[i]; 
    }
    cout << tot + 1 << "\n";

}
