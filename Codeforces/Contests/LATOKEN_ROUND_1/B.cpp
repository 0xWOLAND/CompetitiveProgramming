#include <bits/stdc++.h>
using namespace std;
vector<int> a, diff;
int n; 

int main() {
    /*
    4 8 9 6
     -4 -1 3
     -3 -2 2
     -3 -1 1
     4 8 9 6
     4 7 9 6

    */
    cin >> n;
    n += 2;
    a.resize(n);
    diff.resize(n - 1);
    for(int i = 1; i < n - 1; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++){
        diff[i] = (a[i] - a[i + 1]);
    }

    int ans = 0;

    for(int i = 0; i < n - 1; i++){
        while(abs(diff[i] + diff[i + 1] > 1 + abs((diff[i] + 1) - (diff[i + 1] - 1)))){
            ans++;
            diff[i]++;
            diff[i + 1]--;
            a[i]--;
        }
    }

    for(auto k:  diff){
        ans += k;
    }
    cout << ans <<"\n";
}