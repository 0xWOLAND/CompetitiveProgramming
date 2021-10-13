#include <bits/stdc++.h>
using namespace std;

int n, k;
const long long MAXN = 1e5 + 5;
long long a[MAXN];

void test_case(){
	cin >> n >> k;
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	long long ans = INT_MIN;

	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			ans = max(ans, (i + 1) * (j + 1) - k * (a[i] | a[j]));
		}
	}

	cout << ans << "\n";

}

int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}