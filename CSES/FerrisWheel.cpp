#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    int l = 0, r = n - 1;
    int tot = 0;
    while(l <= r){
        if(a[l] + a[r] <= x){
            tot++;
            l++;
            r--;
        }
        else if(a[l] + a[r] > x){
            r--;
            tot++;
        }
    }
    cout << tot << "\n";
}
