#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while(T--){
		int n; cin >> n;
		string s; cin >> s;

		for(int i = 0; i < n; i++){
			if(s[i] == 'U'){
				s[i] = 'D';
			}
			else if(s[i] == 'D'){
				s[i] = 'U';
			}
		}
		cout << s << "\n";
	}
}