#include <bits/stdc++.h>
using namespace std;

int n, m;

void test_case(){
	cin >> n >> m;

	int cur = 0;
	if(n > m){
		cout << "0\n";
		return;
	}

	vector<int> a;

	for(int i = 1; i <= m; i<<=1){
		if(!(n & i)){
			a.push_back(i);
		}
	}

	for(int i = 0; i < (1 << m); i++){
		int k = 0;
		for(int j = 0; (1 << j) <= m; j++){
			if(i & j){
				k |= a[j];
			}
		}
		k |= n;
		if(k > m){
			cout << k << "\n";
			return;
		}
	}
}

int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}