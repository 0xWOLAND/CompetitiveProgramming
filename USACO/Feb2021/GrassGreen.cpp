#include <bits/stdc++.h>
using namespace std;
/*
57 120 87
200 100 150
2 141 135
*/
struct point{
    int x;
    int y;
};
// Convert 100s to 1s and <100s to -1s and >100s to 0s and use prefix sums
int main()
{
    int n;
    int field[n][n];
    vector<point> hundreds;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            cin >> field[i][j];
            if(field[i][j] == 100)
                hundreds.push_back({i, j});
        }
    }
    int ans = hundreds.size();
    for (int i = 0; i < hundreds.size(); i++){
    // Check Up
    for (int u = i; u < n; u++){
        for(int v = )
    }
    // Check Down
    // Check Left
    // Check Right
    }
}