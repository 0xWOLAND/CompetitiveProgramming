#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while(T--){
		int n; cin >> n;
		if(n % 2 == 1){
			printf("%d %d\n", 2, n - 1);
		}
		else{
			printf("%d %d\n", 2, n);
		}
	}
}