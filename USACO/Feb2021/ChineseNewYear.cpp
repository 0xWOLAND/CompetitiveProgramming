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

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    arr.push_back(0);
    sort(arr.rbegin(), arr.rend());
    vector<int> dist(n);
    for (int i = 0; i < n; i++)
    {
        dist[i] = arr[i] - arr[i + 1];
    }


    k -= 2;
    int ans = 0;
    int l = 0, r = 1;
    while (l < n)
    {
        if (arr[l] - arr[r] < dist[n - 1 - k])
        {
            r++;
        }
        else
        {
            int diff = roundUp(arr[l]) - roundDown(arr[r - 1]);
            ans += diff;
            l = r;
            r++;
        }
    }
    cout << ans << "\n";
}