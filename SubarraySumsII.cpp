#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
        int n, x;
        cin >> n >> x;
        std::map<int, int> map;
        map[0] = 1;
        int u;
        int sum = 0, ans = 0;
        for(int i = 0; i < n; i++) {
              cin >> u;
              sum += u;
              if(map[sum - x]){
                ans += map[sum - x];
              }
              map[sum] += 1;
        }
        cout << ans << "\n";
        return 0;
}
