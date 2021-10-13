#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n),b;
	for(int i = 0; i < n; i++) cin >> a[i];
	b = a;
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++){
		if(a[i] == b[i]) continue;
		else if(!(0 <= a[i] - x || a[i] + x < n)){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}