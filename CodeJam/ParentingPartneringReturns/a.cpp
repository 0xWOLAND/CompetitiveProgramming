#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
typedef pair<pair<int, int>, int> pii;
#define f first
#define s second

void solve(){
	int n; cin >> n;
	vector<pii> times;
	for(int i = 0; i < n; i++){
		int u, v;
		scanf("%d %d", &u, &v);
		times.push_back(make_pair(make_pair(u, v), i));
	}
	sort(times.begin(), times.end());
	int C = 0, J = 0;
	string ans(n, ' ');
	for(int i = 0; i < n; i++){
		int from = times[i].f.f;
		int to = times[i].f.s;
		int idx = times[i].s;
		if(C <= from){
			C = to;
			ans[idx] = 'C';
		}
		else if(J <= from){
			J = to;
			ans[idx] = 'J';
		}
		else{
			printf("IMPOSSIBLE\n");
			return;
		}
	}
	cout << ans << "\n";
}

int main() {
	int T; cin >> T;
	for(int i = 1; i <= T; i++){
		printf("Case #%d: ", i);
		solve();
	}
}
