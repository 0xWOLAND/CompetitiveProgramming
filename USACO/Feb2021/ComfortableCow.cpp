#include <bits/stdc++.h>
using namespace std;
#include <chrono>
struct point
{
    int x;
    int y;
    bool operator==(point a) const
    {
        if (a.x == x && a.y == y)
            return true;
        else
            return false;
    }
    bool operator<(point a) const
    {
        if (a.x < x)
            return true;
        else if (a.y < y)
            return true;
        else
            return false;
    }
};

set<point> added_points;

int numNeighbors(point p, vector<vector<int>> board)
{
    int ans = 0;
    if ((board[p.x - 1][p.y]))
    {
        ans++;
    }
    if ((board[p.x][p.y - 1]))
    {
        ans++;
    }
    if ((board[p.x + 1][p.y]))
    {
        ans++;
    }
    if ((board[p.x][p.y + 1]))
    {
        ans++;
    }
    // printf("Point (%d, %d) has %d neighbors\n", p.x, p.y, ans);
    return ans;
}

vector<vector<int>> search(point src, vector<vector<int>> board)
{

    vector<point> open_point;
    int ans = 0;
    stack<point> s;
    s.push(src);

    while (!s.empty())
    {
        point p = s.top();
        s.pop();
        if ((!board[p.x - 1][p.y]))
        {
            open_point.push_back({p.x - 1, p.y});
        }
        if ((!board[p.x][p.y - 1]))
        {
            open_point.push_back({p.x, p.y - 1});
        }
        if ((!board[p.x + 1][p.y]))
        {
            open_point.push_back({p.x + 1, p.y});
        }
        if ((!board[p.x][p.y + 1]))
        {
            open_point.push_back({p.x, p.y + 1});
        }

        // added_points.erase({p.x - 1, p.y});
        // added_points.erase({p.x, p.y - 1});
        // added_points.erase({p.x + 1, p.y});
        // added_points.erase({p.x, p.y + 1});

        if (open_point.size() == 1)
        {
            board[open_point[0].x][open_point[0].y] = 1;
            added_points.insert({open_point[0].x, open_point[0].y});
        }

        if ((board[p.x - 1][p.y]) && numNeighbors({p.x - 1, p.y}, board) == 3)
        {
            // printf("Checking (%d, %d)\n", p.x - 1, p.y);
            // printf("Answer: %d\n", ans);
            s.push({p.x - 1, p.y});
        }
        if ((board[p.x][p.y - 1]) && numNeighbors({p.x, p.y - 1}, board) == 3)
        {
            // printf("Checking (%d, %d)\n", p.x, p.y - 1);
            // printf("Answer: %d\n", ans);
            s.push({p.x, p.y - 1});
        }
        if ((board[p.x + 1][p.y]) && numNeighbors({p.x + 1, p.y}, board) == 3)
        {
            // printf("Checking (%d, %d)\n", p.x + 1, p.y);
            // printf("Answer: %d\n", ans);
            s.push({p.x + 1, p.y});
        }
        if ((board[p.x][p.y + 1]) && numNeighbors({p.x, p.y + 1}, board) == 3)
        {
            // printf("Checking (%d, %d)\n", p.x, p.y + 1);
            // printf("Answer: %d\n", ans);
            s.push({p.x, p.y + 1});
        }
        if ((board[p.x - 1][p.y]) && numNeighbors({p.x - 1, p.y}, board) == 3)
        {
            // printf("Checking (%d, %d)\n", p.x - 1, p.y);
            // printf("Answer: %d\n", ans);
            s.push({p.x - 1, p.y});
        }
        if ((board[p.x][p.y - 1]) && numNeighbors({p.x, p.y - 1}, board) == 3)
        {
            // printf("Checking (%d, %d)\n", p.x, p.y - 1);
            // printf("Answer: %d\n", ans);
            s.push({p.x, p.y - 1});
        }
        if ((board[p.x + 1][p.y]) && numNeighbors({p.x + 1, p.y}, board) == 3)
        {
            // printf("Checking (%d, %d)\n", p.x + 1, p.y);
            // printf("Answer: %d\n", ans);
            s.push({p.x + 1, p.y});
        }
        if ((board[p.x][p.y + 1]) && numNeighbors({p.x, p.y + 1}, board) == 3)
        {
            // printf("Checking (%d, %d)\n", p.x, p.y + 1);
            // printf("Answer: %d\n", ans);
            s.push({p.x, p.y + 1});
        }
        open_point.clear();
    }
    return board;
}

int main()
{

    vector<vector<int>> board(2002, vector<int>(2002));
    int n;
    cin >> n;

    auto start = std::chrono::high_resolution_clock::now();

    vector<point> points;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        board[u + 1000][v + 1000] = 1;
        points.push_back({u, v});

        auto ans = search({u + 1000, v + 1000}, board);
        added_points.erase({u + 1000, v + 1000});
        cout << added_points.size() << "\n";
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    cout << "Time: " << duration.count() << "ms\n";
}