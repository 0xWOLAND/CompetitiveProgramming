#include <bits/stdc++.h>
using namespace std;

const int MN = 200005;
int n;
int x[MN], y[MN];
int a[5005], b[5005];
 
int main() {
 
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d%d", x + i, y + i);
    a[x[i] + y[i]]++;
    b[x[i] - y[i] + 1000]++;
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    ans += a[x[i] + y[i]] + b[x[i] - y[i] + 1000] - 2;
  }
  printf("%lld\n", ans / 2);
 
	return 0;
}
