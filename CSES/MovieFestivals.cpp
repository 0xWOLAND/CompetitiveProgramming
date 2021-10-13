#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

bool cmp(pii a, pii b){
	if(a.second == b.second){
		return a.first < b.first;
	}
	return a.second < b.second;
}
int main() {

	long long n; cin >> n;
	vector<pair<int, int> > a;
	for(long long i = 0; i < n; i++){
		long long u, v;
		cin >> u >> v;
		a.push_back({u,v});
	}
	sort(a.begin(), a.end(), cmp);

	long long tot = 1;
	pii cur = a[0];
	for(int i = 1; i < n; i++){
		if(a[i].first >= cur.second){
			tot++;
			cur = a[i];
		}
	}
	cout << tot << "\n";
}