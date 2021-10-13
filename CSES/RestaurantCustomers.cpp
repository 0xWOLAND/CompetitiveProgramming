#include <bits/stdc++.h>
using namespace std;


int main() {

	long long n; cin >> n;
	vector<pair<int, int> > a;
	for(long long i = 0; i < n; i++){
		long long u, v;
		cin >> u >> v;
		a.push_back({u,1});
		a.push_back({v, -1});
	}
	sort(a.begin(), a.end());

	long long tot = 0;
	long long k = 0;
	for(long long i = 0; i < a.size(); i++){
		k += a[i].second;
		tot = max(tot, k);
	}
	cout << tot << "\n";
}