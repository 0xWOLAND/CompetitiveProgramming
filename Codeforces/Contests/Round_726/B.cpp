#include <bits/stdc++.h>
using namespace std;

int h(int i, int j, int u, int v){
	return abs(i - u) + abs(j - v);
}

void test_case(){
	long long n, m, i, j;
	cin >> n >> m >> i >> j;

	int x[4] = {1, 1, n, n};
	int y[4] = {1, m, 1, m};
	int ans[4];
	if(n - i > i - 1){
		ans[0] = n;
		ans
	}
	else{
		ans[0] = 1;
	}
	if(m - j > j - 1){
		ans[1] = m;
	}
	else{
		ans[1] = 1;
	}


}

int main() {
	int T; cin >> T;
	while(T--) test_case();
}