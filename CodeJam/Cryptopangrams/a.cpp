#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> arr(k);
	for(int i = 0; i < k; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	for(int num: arr) cout << num << "\n";
}

int main() {
	int T; cin >> T;
	for(int i = 1; i <= T; i++){
		printf("Case #%d: ", i);
		solve();
	}
}
