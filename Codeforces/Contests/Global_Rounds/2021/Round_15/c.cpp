#include <bits/stdc++.h>
using namespace std;
int a[400];

int cnt(int i, int j, int n){
	int ans = 0;
	for(int x = i + 1; x < j; x++){
		if(a[x] != -1 && (a[x] < i || a[x] > j)) ans++;
	}
	return ans;
}

void test_case(){
	int n, k;
	cin >> n >> k;
	memset(a, -1, sizeof(a));
	vector<pair<int, int> > pc;
	for(int i = 0; i < k; i++){
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		if(u > v){
			swap(u, v);
		}
		a[u] = v;
		a[v] = u;
		pc.push_back({u, v});
	}

	int chords = n - k;
	int ans = 0;

	for(int i = 0; i < k; i++){
		for(int j = i + 1; j < k; j++){
			if((pc[i].first < pc[j].first && pc[i].second > pc[j].first) || (
				pc[j].first < pc[i].first && pc[j].second > pc[i].first)){
				ans++;
			}
		}
	}
	while(chords--){
		int from = -1, to = -1, inter = 0;
		for(int i = 0; i < 2 * n; i++){
			if(a[i] == -1){
				from = i;
				break;
			}
		}
		for(int i = n, dir = 1; i >= 0 && i < 2 * n;){
			if(a[i] == -1){
				to = i;
				break;
			}
			i += dir;
			if(dir < 0){
				dir--;
			}
			else{
				dir++;
			}
			dir *= -1;
		}
		for(int i = 0; i < 2 * n; i++){
			for(int j = i + 1; j < 2 * n; j++){
				if(a[i] == -1 && a[j] == -1){
					int k = cnt(i, j, 2 * n);
					if(k > inter){
						inter = k;
						from = i;
						to = j;
					}
				}
			}
		}
		printf("%d -> %d\n", from + 1, to + 1);
		ans += inter;
		a[from] = to;
		a[to] = from;
	}
	cout << n << "--" << k << "\n";
	cout << ans << "\n";

}

int main() {
	int t; cin >> t;
	while(t--){
		test_case();
	}
}