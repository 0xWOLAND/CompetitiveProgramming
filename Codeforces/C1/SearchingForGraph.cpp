#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n, p;
	cin >> n >> p;
	int k = 2 * n + p;
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				if(k <= 0){
					return;
				}
				k--;
				cout << i << " " << j << "\n";
			}
		}
}

int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}