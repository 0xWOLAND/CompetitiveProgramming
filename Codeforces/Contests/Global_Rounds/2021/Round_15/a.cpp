#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n; string s;
	cin >> n;
	cin >> s;

	string ans = s;
	sort(ans.begin(), ans.end());

	int res = n;

	for(int i = 0; i < n; i++){
		if(ans[i] == s[i]){
			res--;
		}
	}
	cout << res << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--){
		test_case();
	}
}