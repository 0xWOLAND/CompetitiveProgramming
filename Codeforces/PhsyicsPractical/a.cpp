#include <string>
#include <vector>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <queue>

#define pii pair<int, int>
#define pb push_back
#define mb make_pair

using namespace std;

int n;
int f[5001];
int c[5001];

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  cin >> n;
  for (int i = 1; i <= n; i ++ ) {
    int x;
    cin >> x;
    f[x] ++;    
  }
  for (int i = 1; i <= 5000; i ++) {
    c[i] = c[i - 1] + f[i];
  }
  int res = 0;
  int i = 1;
  while (i <= 5000) {
    int hi = min(5000, 2 * i);
    int lo = i - 1;
    res = max(res, c[hi] - c[lo]);
    i ++;
  }
  cout << n - res << endl;
  return 0;
}
