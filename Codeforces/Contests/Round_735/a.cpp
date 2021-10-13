#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n; cin >> n;
	unsigned long long a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	unsigned long long ans = 0;

	for(int i = 0; i < n - 1; i++){
		ans = max(ans, a[i] * a[i + 1]);
	}

	cout << ans << "\n";
}

int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}