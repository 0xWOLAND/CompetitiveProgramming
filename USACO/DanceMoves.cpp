#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
#define f first
#define s second
int n, k;
vector<int> cows(n);

bool k_found() {
    for(int i = 0; i < n; i++){
        if(cows[i] != i) return false;
    }
    return true;
}

void printAns(vector<bool> m[]) {
    for(int i = 0; i < n; i++){
        int ans = 0;
        for(int j = 0; j < n; j++){
            if(m[i][j]) ans++;
        }
        cout << ans << "\n";
    }
}

int main() {
    cin >> n >> k;
    vector<bool> b(n);
    vector<bool> m[n];
    vector<pi> move(k);
    for(int i = 0; i < n; i++){
        cows[i] = i;
        m[i] = b;
    }
    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        move[i] = make_pair(a,b);
    }
//    vector<int> ans(n, 1);

    for(int i = 0; i < 100; i++){
        if(i != 0 && k_found()){
//            printAns(m);
        }
        for(int i = 0; i < n; i++){
//            m[cows[i]][i] = 1;
        }
        int from = move[i % n].f;
        int to = move[i % n].s;
        int tmp = cows[from];
        cows[from] = cows[to];
        cows[to] = tmp;
        cout << "\n";
    }

    return 0;
}
