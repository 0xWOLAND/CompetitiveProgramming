#include <bits/stdc++.h>
using namespace std;
int n, k;
const int mx = 10;

int board[mx][mx], actual[mx][mx];

int q(int x, int y, int a, int b){
    return actual[x + a][y + b] - actual[x + a][y] - actual[x][y + b] + actual[x][y];
}
int main() {
    scanf("%d %d", &n, &k);
    int tot = 0;
    memset(board, 0, sizeof(board));
    memset(actual, 0, sizeof(actual));
    for(int i = 0; i < n; i++){
        int x1,y1,x2,y2;
        scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
        x1++, y1++, x2++, y2++;
        board[x1][y1]++;
        board[x1][y2]--;
        board[x2][y1]--;
        board[x2][y2]++;
    }

    for(int i = 1; i < mx; i++){
        for(int j = 1; j < mx; j++){
            board[i][j] += board[i - 1][j] + board[i][j - 1] - board[i - 1][j - 1];
            if(board[i][j] == k - 1){
                actual[i][j] = 1;
            }
            else if(board[i][j] == k){
                actual[i][j] = -1;
                tot++;
            }
        }
    }
    int topDP[mx], botDP[mx], leftDP[mx], rightDP[mx];
    memset(topDP, 0, sizeof(topDP));
    memset(leftDP, 0, sizeof(leftDP));
    memset(rightDP, 0, sizeof(rightDP));
    memset(botDP, 0, sizeof(botDP));

    for(int i = 1; i < mx; i++){
        for(int j = 1; j < mx; j++){
            actual[i][j] += (actual[i - 1][j] + actual[i][j - 1] - actual[i - 1][j - 1]);
        }
    }
    int ans = 0;
    for(int y = 1; y < mx; y++){
        for(int l = 1; l + y < mx; l++){
            int topSum = 0, botSum = 0, leftSum = 0, rightSum = 0;
            for(int x = 1; x < mx; x++){
                topSum = max(topSum, topSum + q(x - 1, y, 1, l));
                leftSum = max(leftSum, leftSum + q(y, mx - x - 1, l, 1));
                botSum = max(botSum, botSum + q(mx - x - 1, y, 1, l));
                rightSum = max(rightSum, rightSum + q(y, x - 1, l, 1));
                ans = max(ans, topDP[x] = max(topDP[x], topSum));
                ans = max(ans, leftDP[x] = max(leftDP[x], leftSum));
                ans = max(ans, rightDP[x] = max(rightDP[x], rightSum));
                ans = max(ans, botDP[x] = max(botDP[x], botSum));
            }
        }
    }

    for(int i = 1; i < mx; i++){
        topDP[i] = max(topDP[i - 1], topDP[i]);
        botDP[i] = max(botDP[i - 1], botDP[i]);
        leftDP[i] = max(leftDP[i - 1], leftDP[i]);
        rightDP[i] = max(rightDP[i - 1], rightDP[i]);
    }

    for(int i = 0; i < mx; i++){
        ans = max(ans, topDP[i] + botDP[i]);
        ans = max(ans, leftDP[i] + rightDP[i]);
    }
    printf("%d\n", ans + tot);
}
