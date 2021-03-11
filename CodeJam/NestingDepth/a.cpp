#include <bits/stdc++.h>
using namespace std;

void solve(int tc){
	string s; cin >> s;

	string ans = "";
	int n = s.length();
	s = '0' + s + '0';	
	
	for(int i = 1; i <= n + 1; i++){
		char cur = s[i - 1];
		if(s[i] > cur){
			string t(s[i] - cur, '(');
			ans += t;
		}
		else if(s[i] < cur){
			string t(cur - s[i], ')');
			ans += t;
		}
		ans += s[i];
		cur = s[i];
	}
	printf("Case #%d: ", tc);
	cout << ans.substr(0, ans.length() - 1) << "\n";
}

int main() {
		int T; cin >> T;
		for(int i = 1; i <= T; i++){
			solve(i);
		}
}

