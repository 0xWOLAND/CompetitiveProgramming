#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("maxcross.in");
    ofstream fout("maxcross.out");
    int N, K, B;
    fin >> N >> K >> B;

    vector<bool> status(N + 1);
    for (int i = 0; i < B; i++)
    {
        int u;
        fin >> u;
        status[u] = 1;
    }

    vector<int> prefix(N + 1);
    for (int i = 1; i <= N; i++)
    {
        prefix[i] = prefix[i - 1] + status[i];
    }
    int ans = K;
    for (int i = K; i <= N; i++)
    {
        ans = min(ans, prefix[i] - prefix[i - K]);
    }

    fout << ans << "\n";
}