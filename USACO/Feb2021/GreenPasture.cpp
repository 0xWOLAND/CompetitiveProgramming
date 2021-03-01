#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int field[n][n];
    int prefix[n + 1][n + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> field[i][j];
            if (field[i][j] < 100)
                field[i][j] = -1000;
            else if (field[i][j] == 100)
                field[i][j] = 1;
            else
                field[i][j] = 0;
        }
    }

    prefix[0][0] = field[0][0];
    for (int i = 1; i < n; i++)
    {
        prefix[0][i] = prefix[0][i - 1] + field[0][i];
        prefix[i][0] = prefix[i - 1][0] + field[i][0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + field[i][j];
        }
    }


    unsigned long long ans = 0;

    for (int i = -1; i < n; i++)
    {
        for (int j = -1; j < n; j++)
        {
            for (int r = i + 1; r < n; r++)
            {
                for (int c = j + 1; c < n; c++)
                {
                    if (i == -1 && j == -1 && prefix[r][c] > 0)
                    {
                        ans++;
                    }
                    else if (j > -1 && i == -1 && prefix[r][c] - prefix[r][j] > 0)
                    {
                        ans++;
                    }
                    else if (i > -1 && j == -1 && prefix[r][c] - prefix[i][c] > 0)
                    {
                       ans++;
                    }
                    else if (j > -1 && i > -1 && prefix[r][c] - prefix[i][c] - prefix[r][j] + prefix[i][j] > 0)
                    {
                        ans++;
                    }
                    else if(prefix[r][c] < 0 && !(i < 0 || j < 0)){
                        c = n;
                        // r = n;
                    }
                }
            }
        }
    }

    cout << ans << "\n";
}