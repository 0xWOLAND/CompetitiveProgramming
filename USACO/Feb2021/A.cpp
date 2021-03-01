#include <bits/stdc++.h>
using namespace std;

int roundUp(int n)
{
    int multiple = 12;
    int numToRound = n;
    if (multiple == 0)
        return numToRound;

    int remainder = numToRound % multiple;
    if (remainder == 0)
        return numToRound;

    return numToRound + multiple - remainder;
}

int roundDown(int n)
{
    return (n / 12) * 12;
}

int main()
{


    int n, k;
    cin >> n >> k;
    k--;
    vector<int> arr(n);
    vector<int> dist(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr.push_back(0);

    sort(arr.rbegin(), arr.rend());
    for (int i = 0; i < n; i++)
    {
        dist[i] = arr[i] - arr[i + 1];
    }
    dist.push_back(arr[n - 1]);
    sort(dist.rbegin(), dist.rend());
    int ans = 0;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        int idx = distance(dist.begin(), find(dist.begin(), dist.end(), arr[i] - arr[i + 1]));
        if (idx < k && k > 0)
        {
            k--;
            dist.erase(idx + dist.begin());
            ans += roundUp(arr[prev]) - roundDown(arr[i]);
            prev = i + 1;
        }
    }

    cout << ans << "\n";
    return 0;
}