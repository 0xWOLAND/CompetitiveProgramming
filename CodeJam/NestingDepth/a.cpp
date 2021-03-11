#include <bits/stdc++.h>
using namespace std;

void solve(int tc){
	string s; cin >> s;
	
	string ans = "";
	int n = s.length();
	
	char cur = '0';
	for(int i = 0; i < n; i++){
		if(s[i] > cur){
			ans += "(";
		}
		else if(s[i] < cur){
			ans += ")";
		}
		ans += s[i];
		cur = s[i];
	}
	if(s[n - 1] == '1') ans += ')';
	printf("Case #%d: ", tc);
	cout << ans << "\n";
}

int main() {
		int T; cin >> T;
		for(int i = 1; i <= T; i++){
			solve(i);
		}
}

