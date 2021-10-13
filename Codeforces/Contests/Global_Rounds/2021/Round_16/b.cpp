#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		string tmp = "";
		tmp += s[0];
		int n = s.length();

		for(int i = 1; i < n; i++){
			if(s[i] != s[i - 1]){
				tmp += s[i];
			}
		}

		n = tmp.length();
		int ans = 2;
		int cnt[3];
		memset(cnt, 0, sizeof(cnt));
		for(int i = 0; i < n; i++){
			cnt[tmp[i] - '0']++;
		}

		cout << min(2, cnt[0]) << "\n";

		
	}
}
