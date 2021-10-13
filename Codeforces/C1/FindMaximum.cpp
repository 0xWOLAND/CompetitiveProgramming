#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	string s; cin >> s;
	if(s == to_string((1 << n) - 1)){
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans += a[i];
		}
		cout << ans << "\n";
	}
	else{
		int last_loc = -1;
		bool flag = false;
		for(int i = n - 1; i >= 0; i--){
			if(s[i] == '1'){
				last_loc = i;
				flag = true;
				break;
			}
		}
		if(!flag){
			cout << "0\n";
			return 0;
		}
		int tot = 0;
		for(int i = 0; i < last_loc; i++){
			tot += a[i];
		}
		int ans = max(tot, a[last_loc]);
		cout << ans << "\n";
	}
}