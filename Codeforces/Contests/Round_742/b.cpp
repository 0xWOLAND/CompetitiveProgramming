#include <bits/stdc++.h>
using namespace std;

void test_case() {
	int a, b;
	cin >> a >> b;
	if(a < b){
		int ans = 2;
		if((b ^ (a - 1)) < a && a - 1 != 0){
			printf("%d ^ %d = %d\n", b, a - 1, (b ^ (a - 1)));
			ans++;
		}
		cout << ans << "\n";
	}
	else if(a > b){
		if(b == 0){
			cout << 3 << "\n";
		}
		else{
			cout << 2 << "\n";
		}
	}
	else {
		
		cout << 3 << "\n";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		test_case();
	}
}