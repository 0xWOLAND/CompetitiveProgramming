#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n; cin >> n;
	string a, b;
	cin >> a >> b;
	int ans = 0;

	for(int i = 0; i < n; i++){
		if(i > 0 && b[i] == '1' && a[i - 1] == '1'){
			b[i] = '0';
			a[i - 1] = '0';
			ans++;
		}
		else if(b[i] == '1' && a[i] == '0'){
			ans++;
		}
		else if(i + 1 < n && b[i] == '1' && a[i + 1] == '1'){
			b[i] = '0';
			a[i + 1] = '0';
			ans++;
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