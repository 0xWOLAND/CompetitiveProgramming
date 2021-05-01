#include <bits/stdc++.h>
using namespace std;
#define el      	'\n'
#define ft 			first
#define sd 			second
#define mp(x,y)  	make_pair((x),(y))
#define pb(x)    	push_back((x))
#define all(v)  	((v).begin()),((v).end())
#define sz(x)  		((int) (x).size())
#define clr(a,b)	memset(a,b,sizeof(a))
typedef long long ll;
void Yahia74() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); //freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}
const int N = 1e5 + 74, OO = 0x3f3f3f3f, MOD = (int) 1e9 + 7;

int main() {
	Yahia74();
	int a, x, y;
	cin >> a >> x >> y;
	/* handle the base cases:
	 * y = 0 means on x axis
	 * x is out of square
	 * y hit the border of square */
	if (y == 0 || abs(x) >= a || y % a == 0)
		return cout << -1, 0;
	int level = (y / a) + 1; // to get the height level
	int ans;
	if (level == 1) {
		if (abs(x) >= ((a + 1) / 2)) // check the x out of half the square
			ans = -1;
		else
			ans = 1;
	} else if (level % 2 != 0) {
		int oddLevels = level / 2; // the number of Odd levels
		ans = oddLevels * 2 + (oddLevels-1) + 2; // two's square + one's square + initial 2 square
		if (x < 0)
			ans--;
		if (x == 0) // check the stone touch the y axis
			ans = -1;
	} else {
		int oddLevels = (level - 1) / 2; // to get the number of Odd levels
		ans = oddLevels * 2 + (oddLevels + 1) + 1; // two's square + (one's square +1) + initial 2 square
		if (abs(x) >= ((a + 1) / 2) )
			ans = -1;
	}
	cout << ans;
	return 0;
}