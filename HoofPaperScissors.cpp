#include <bits/stdc++.h>
using namespace std;
struct hps{
        int h;
        int p;
        int s;
};
int main() {
        int n;
        cin >> n;
        std::vector<hps> arr(n + 1);

        arr[0] = {0,0,0};
        for(int i = 0; i < n; i++) {
                char c;
                cin >> c;
                arr[i + 1] = arr[i];
                if(c == 'P') arr[i + 1].p++;
                if(c == 'H') arr[i + 1].h++;
                if(c == 'S') arr[i + 1].s++;
        }
        int ans = 0, tmp;
        for(int i = 1; i <= n; i++){
          tmp = max(arr[i].h, max(arr[i].p, arr[i].s));
          tmp += max(arr[n].h - arr[i].h, max(arr[n].p - arr[i].p, arr[n].s - arr[i].s));
          ans = max(ans, tmp);
        }
        cout << ans << "\n";
}
