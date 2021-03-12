#include <bits/stdc++.h>
using namespace std;

void solve(){
	int N, B;
	scanf("%d %d", &N, &B);
	vector<int> vec(N);
	for(int i = 0; i < N; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());
	int ans = 0;
	int cur = 0;
	while(B >= 0 && cur < vec.size()){
		if(B >= vec[cur]){
			ans++;
			B -= vec[cur];
			cur++;
		}
		else{
			cout << ans << "\n";
			return;
		}
	}
	cout << ans << "\n";
	return;
}
	

int main() {
	int T; cin >> T;
	for(int i = 1; i <= T; i++){
		printf("Case #%d: ", i);
		solve();
	}
}
