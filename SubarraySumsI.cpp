#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        std::vector<int> v(n+1, 0);
        v[0] = 0;
        for(int i = 0; i < n; i++) v[i + 1] += v[i] + arr[i];

        int ans = 0;
        for(int i = 0; i <= n; i++) {
                for(int j = 0; j < i; j++) {
                        if(v[i] - v[j] == x) {
                                ans++;
                        }
                }
        }
        cout << ans << "\n";
        return 0;
}
