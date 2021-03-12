#include <bits/stdc++.h>
using namespace std;
struct point{
	int x, y;
};

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	for(int i = 0; i < str.length(); i++){
		if(str[i] == 'E') str[i] = 'S';
		else if(str[i] == 'S') str[i] = 'E';
	}
	cout << str << "\n";
		
}

int main() {
	int T; cin >> T;
	for(int i = 1; i <= T; i++){
		printf("Case #%d: ", i);
		solve();
	}		
}
