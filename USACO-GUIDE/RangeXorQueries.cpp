#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
    {
        arr[i] ^= arr[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int u, v;
        cin >> u >> v;

        cout << (arr[v] xor arr[u - 1]) << "\n";
    }

    return 0;
}