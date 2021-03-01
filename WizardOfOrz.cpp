#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector<int> ans(n);
	ans[0] = 9;
	for(int i = 1; i < n; i++){
		ans[i] = abs(9 - i) % 10;	
	}
	for(int i = 0; i < n; i++){
		cout << ans[i];
	}
	cout << "\n";


}

int main() {
	int T; cin >> T;
	while(T--){
		solve();
	}
}
