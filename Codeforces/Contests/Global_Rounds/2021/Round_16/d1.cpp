#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n, m;
	cin >> n >> m;
	const int mx = n * m;
	int a[mx];
	for(int i = 0; i < mx; i++){
		cin >> a[i];
		a[i]--;
	}
	int tot = 0;

	for(int i = 0; i < mx; i++){
		for(int j = 0; j < i; j++){
			tot += (a[j] < a[i]);
		}
	}
	cout << tot << "\n";
}

int main() {
	int t; cin >> t;
	while(t--){
		test_case();
	}
}