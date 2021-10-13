#include <bits/stdc++.h>
using namespace std;

void test_case(){
	unsigned long long n; cin >> n;
	unsigned long long ans = (n * 10) / 4;
	if(ans % 5 == 0){
		cout << ans << "\n";
	}

	else{
		cout << max((unsigned long long) (15), ((ans / 5) + 1) * 5) << "\n";
	}

}

int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}