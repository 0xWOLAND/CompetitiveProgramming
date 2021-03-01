#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int board[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> board[i][j];
    }
    int ans = 0;
    int a, b, c, d, f, s, t;
    if(n % 2 == 0){
        for(int i = 0; i < n; i += 2){
            for(int j = 0; j < n; j += 2){
               a = board[i][j];
               b = board[i + 1][j];
               c = board[i][j + 1];
               d = board[i + 1][j + 1];
               f = max(max(a, b), max(c, d));
               if(f == a) s = max(b, max(c, d));
               if(f == b) s = max(a, max(c, d));
               if(f == c) s = max(a, max(b, d));
               if(f == d) s = max(b, max(c, a));
               ans += f + s;
           }
        }
        cout << ans << "\n";
        return 0;
    }
    int u = 0, v = 0, w = 0, x = 0;
    for(int i = 1; i < n; i += 2){
        for(int j = 0; j < n; j += 2){
           a = board[i][j];
           b = board[i + 1][j];
           c = board[i][j + 1];
           d = board[i + 1][j + 1];
           f = max(max(a, b), max(c, d));
           if(f == a) s = max(b, max(c, d));
           if(f == b) s = max(a, max(c, d));
           if(f == c) s = max(a, max(b, d));
           if(f == d) s = max(b, max(c, a));
           w += f + s;
       }
    }
    u = 0, v = 0, w = 0, x = 0;
    for(int i = 0; i < n; i += 2){
        for(int j = 1; j < n; j += 2){
           a = board[i][j];
           b = board[i + 1][j];
           c = board[i][j + 1];
           d = board[i + 1][j + 1];
           f = max(max(a, b), max(c, d));
           if(f == a) s = max(b, max(c, d));
           if(f == b) s = max(a, max(c, d));
           if(f == c) s = max(a, max(b, d));
           if(f == d) s = max(b, max(c, a));
           u += f + s;
       }
    }
    u = 0, v = 0, w = 0, x = 0;
    for(int i = 0; i < n; i += 2){
        for(int j = 0; j < n; j += 2){
           a = board[i][j];
           b = board[i + 1][j];
           c = board[i][j + 1];
           d = board[i + 1][j + 1];
           f = max(max(a, b), max(c, d));
           if(f == a) s = max(b, max(c, d));
           if(f == b) s = max(a, max(c, d));
           if(f == c) s = max(a, max(b, d));
           if(f == d) s = max(b, max(c, a));
           v += f + s;
       }
    }
    u = 0, v = 0, w = 0, x = 0;
    for(int i = 1; i < n; i += 2){
        for(int j = 1; j < n; j += 2){
           a = board[i][j];
           b = board[i + 1][j];
           c = board[i][j + 1];
           d = board[i + 1][j + 1];
           f = max(max(a, b), max(c, d));
           if(f == a) s = max(b, max(c, d));
           if(f == b) s = max(a, max(c, d));
           if(f == c) s = max(a, max(b, d));
           if(f == d) s = max(b, max(c, a));
           x += f + s;
       }
    }

    cout << max(max(u,v), max(w, x)) << "\n";

}
