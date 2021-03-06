#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x, y;
    bool operator<(point p)
    {
        return x < p.x;
    }
};

int main()
{

    int n;
    cin >> n;

    vector<vector<int>> above(n + 1, vector<int>(n + 1));
    vector<vector<int>> below(n + 1, vector<int>(n + 1));
    vector<point> arr;

    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        arr.push_back({u, v});
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            above[i][j + 1] = above[i][j] + (arr[j].y > arr[i].y ? 1 : 0);
            below[i][j + 1] = below[i][j] + (arr[j].y < arr[i].y ? 1 : 0);
        }
    }

    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%2d", above[j][i]);
        }
        cout << "\n";
    }
    cout << "--------------------\n";
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%2d", below[j][i]);
        }
        cout << "\n";
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans++;
            int a, b;
            if (arr[j].y > arr[i].y)
            {
                a = above[j][j + 1] - above[j][i + 1];
                b = below[i][j + 1] - below[j][i + 1];
            }
            else
            {
                b = above[j][j + 1] - above[j][i + 1];
                a = below[i][j + 1] - below[j][i + 1];
            }

            ans += a + b + a * b;
        }
    }

    cout << ans + n + 1 << "\n";
}