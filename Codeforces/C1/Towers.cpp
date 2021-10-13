#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<pair<int, int> > a, ans;

	for(int i = 0; i < n; i++){
		int u; cin >> u;
		a.push_back({u, i});
	}
	int s = 0, m = 0;
	sort(a.begin(), a.end());
	while(k--){
		int l = 0, r = n - 1;
		if(abs(a[l].first - a[r].first) <= 1){
			k = -1;
			break;
		}
		a[r].first--;
		a[l].first++;
		ans.push_back({1 + a[r].second, 1 + a[l].second});
		sort(a.begin(), a.end());
		m++;
	}

	s = a[n - 1].first - a[0].first;
	printf("%d %d\n", s, m);

	for(auto x: ans){
		printf("%d %d\n", x.first, x.second);
	}
}