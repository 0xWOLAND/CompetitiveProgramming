#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    queue<int> a, b;

    int k; cin >> k;
    for(int i = 0; i < k; i++){
        int u; cin >> u;
        a.push(u);
    }

    cin >> k;
    for(int i = 0; i < k; i++){
        int u; cin >> u;
        b.push(u);
    }
    int ans = 0;
    int i;
    for(i = 0; i < 1e6 && !a.empty() && !b.empty(); i++){
        ans++;
        int A = a.front();
        a.pop();
        int B = b.front();
        b.pop();

        if(A > B){
            a.push(B);
            a.push(A);
        }
        else{
            b.push(A);
            b.push(B);
        }
    }
    if(i > 1e5 + 100){
        cout << -1;
        return 0;
    }
    printf("%d %d\n", ans, (int)(!b.empty()) + 1);
}