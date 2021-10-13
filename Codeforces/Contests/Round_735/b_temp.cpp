#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n, k;
	cin >> n >> k;

	vector<pair<int, int> > a(n);

	for(int i = 0; i < n; i++){
		int u; cin >> u;
		a[i] = {u, i + 1};
	}

	sort(a.begin(), a.end());
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			printf("%d\n", a[i].second * a[j].second - k * (a[i].first | a[j].first));
		}
	}
	cout << "_____\n";
}

int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}