#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        if(k == 1){
            a.push_back(i);
        }
    }

    int ans = a.size();

    for(int i = 1; i < a.size(); i++){
        ans += min(a[i] - a[i - 1] - 1, 1);
    }

    cout << ans << "\n";
}