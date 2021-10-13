#include <bits/stdc++.h>
using namespace std;
// 1 3 6 10 15 21 28 36
// 1 2 3  4  5  6  7  8
void test_case(){
	int n; cin >> n;

	int prefix[n + 1];
	memset(prefix, 0, sizeof(prefix));

	for(int i = 1; i <= n; i++){
		prefix[i] = i + prefix[i - 1];
	}
	if(n == 1){
		cout << 1 << "\n";
		return;
	}
	int ans = 1e9;
	for(int i = 0; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(j - i > 1 && prefix[j] - prefix[i] >= n && prefix[j] - prefix[i] -  (j - i) <= n){
				printf("%d %d %d %d\n", prefix[j], prefix[i], j, i);
				ans = min(ans, j - i);
			}
		}
	}
	cout << ans << "\n";
}

int main(){
	int T; cin >> T;
	while(T--){
		test_case();
	}

}