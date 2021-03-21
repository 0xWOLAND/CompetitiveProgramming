#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    int board[1001][1001];

    for (int i = 0; i < n; i++)
    {
        int x, y, u, v;
        cin >> x >> y >> u >> v;
        x++;
        y++;
        u++;
        v++;

        board[x][y]++;
        board[u][v]++;
        board[x][v]--;
        board[u][y]--;
    }
    int A = 0;

    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            printf("%3d", board[i][j]);
        }
        cout << "\n";
    }
    cout << "\n-------------------------------------\n";
    for (int i = 1; i < 1001; i++)
    {
        for (int j = 1; j < 1001; j++)
        {
            board[i][j] += board[i][j - 1] + board[i - 1][j] - board[i - 1][j - 1];
            if (board[i][j] == k)
            {
                A++;
            }
        }
    }
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 20; j++)
        {
            printf("%3d", board[i][j]);
        }
        cout << "\n";
    }

    printf("Ans: %d\n", A);
    return 0;
}
