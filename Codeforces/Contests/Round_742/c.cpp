#include <bits/stdc++.h>
using namespace std;

void test_case(){
	string s; cin >> s;
	int n = s.length();
	int dp[n];
	memset(dp, 0, n);

	reverse(s.begin(), s.end());
	for(int i = 0; i < n - 1; i++){
		if(i + 2 < n){
			dp[i + 2] = dp[i] + (9 - (s[i] - '0'));
		}
		dp[i + 1] += dp[i] * 2;
	}
}

int main( ){
	int T; cin >> T;
	while(T--){
		test_case();
	}
}