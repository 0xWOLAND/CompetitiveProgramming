#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> prefix(n), suffix(n);
    prefix[0] = v[0];
    suffix[n - 1] = v[n - 1];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }

    for (int i = n - 2; i >= 0; i--){
        suffix[i] = suffix[i + 1] + v[i];
    }
    int ans = 1e9;
    for (int i = 0; i < n; i++){
        ans = min(ans, prefix[i] + suffix[i]);
    }
    printf("%d\n", ans);
}