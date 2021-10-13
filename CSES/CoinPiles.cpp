#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        int diff = abs(a - b);
        if(a < b) swap(a,b);
        a -= 2 * diff;
        b -= diff;
        if(a >= 0 && b >= 0 && a == b && a % 3 == 0 && b % 3 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
