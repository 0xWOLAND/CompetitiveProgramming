#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
double h(int k)
{
    return (-1.0 + sqrt(1.0 - 4.0 * (-2.0 * k))) / 2.0;
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    ll a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll low = floor(h(k));
    ll t = (low * (low + 1)) / 2;

    ll diff = k - t;
    if (diff == 0)
    {
        cout << a[low - 1];
    }
    else{
        cout << a[diff - 1];
    }
}