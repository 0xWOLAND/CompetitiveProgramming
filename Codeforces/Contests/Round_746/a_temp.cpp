#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n, H;
	cin >> n >> H;
	int w[n];
	for(int i = 0; i < n; i++){
		cin >> w[i];
	}

	if(w[n - 1] >= H){
		cout << "1\n";
		return;
	}
	int bg = w[n - 1] + w[n - 2];
	int t = H / bg;
	if(H % bg && t * bg < H) t++;
	if(t * bg - w[n - 2] >= H){
		t = 2 * t - 1;
	}
	else{
		t *= 2;
	}
	cout << t << "\n";
}
// 22 / (7 + 2)
// 2 * H = k * (w[n - 1] + w[n - 2]);
// H = w[n - 1] * u + w[n - 2] * v;
// u = v + 1
int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}