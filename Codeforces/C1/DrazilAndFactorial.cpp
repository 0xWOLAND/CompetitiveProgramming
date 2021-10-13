#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string a;
    cin >> a;
    // 7 * 6 * 5 * 4 * 3 * 2 * 3 * 2 * 3 *  2 * 2

    string nums[10] = {"", "", "2", "3", "223", "5", "53", "7", "7222", "7332"};

    string ans;

    for(int i = 0; i < n; i++){
        ans += (nums[a[i] - '0']);
    }

    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout << ans;
}