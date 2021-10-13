#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int p[n];
	int ans = 0;
	for(int i = 0; i < n; i++){
		cin >> p[i];
		ans ^= p[i];
	}
	int k = 1;
	while(k < n) k <<= 1;
	k >>= 1;
	for(int i = 0; i < n; i++){
		for(int j = k; j < n; j++){

		}
	}
}