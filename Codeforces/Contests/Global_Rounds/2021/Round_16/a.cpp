#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while(T--){
		int n, s;
		cin >> n >> s;
		if(n != 2){
			if(n % 2 == 0) n++;
			n = (n + 1) / 2;
		}
		cout << (s / n) << "\n";
	}
}