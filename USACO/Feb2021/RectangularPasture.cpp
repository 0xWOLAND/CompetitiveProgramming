//
// Created by bhargav on 10/10/21.
//

#include <bits/stdc++.h>
using namespace std;
long long n;

struct p{
    long long x, y;
    void pr(){
        printf("(%d, %d)\n", x, y);
    }
};
bool cmp(p a, p b){ return a.x < b.x; }
bool ycmp(p a, p b) { return a.y < b.y; }
int main() {
    cin >> n;
    p points[n];
    bool board[n + 1][n + 1];
    memset(board, 0, sizeof(board));
    for (long long i = 0; i < n; i++) {
        long long u, v;
        cin >> u >> v;
        points[i] = {u, v};
    }
    sort(points, points + n, cmp);
    for (long long i = 0; i < n; i++) {
        points[i].x = i + 1;
    }
    sort(points, points + n, ycmp);

    for (long long i = 0; i < n; i++) {
        points[i].y = i + 1;
        board[points[i].x][points[i].y] = 1;
    }
    sort(points, points + n, cmp);
    long long ans = 0;
    long long pfx[n + 1][n + 1];
    memset(pfx, 0, sizeof(pfx));
    for(long long i = 1; i <= n; i++){
        for(long long j = 1; j <= n; j++){
            pfx[i][j] = pfx[i - 1][j] + pfx[i][j - 1] - pfx[i - 1][j - 1] + board[i][j];
        }
    }
    for(long long i = 0; i < n; i++){
        for(long long j = i + 1; j < n; j++){
            long long x1 = min(points[i].x, points[j].x);
            long long x2 = max(points[i].x, points[j].x);
            long long y1 = min(points[i].y, points[j].y);
            long long y2 = max(points[i].y, points[j].y);

            long long above = pfx[x2][n] - pfx[x2][y2] - pfx[x1][n] + pfx[x1][y2];
            long long below = pfx[x2][max(0LL, y1 - 1)] - pfx[x1][max(0LL, y1 - 1)];

            ans += ((above + 1) * (below + 1));
        }
    }
    ans += n + 1;
    printf("%lld\n", ans);
    return 0;
}