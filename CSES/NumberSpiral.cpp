#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long t; cin >> t;
    while(t--){
        long long y, x, n;
        cin >> y >> x;
        n = max(y, x);
        long long tot = (n * n) - (n - 1);
        if(n % 2 == 0){
            if(y < x){
                tot -= (n - y);
            }
            else if(y > x){
                tot += (n - x);
            }
        }
        else{
            if(y < x){
                tot += (n - y);
            }
            else if(y > x){
                tot -= (n - x);
            }
        }
        cout << tot << "\n";
    }
}
