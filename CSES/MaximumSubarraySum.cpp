#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	long long a[n];
	for(long long i = 0; i < n; i++){
		cin >> a[i];
	}
	long long tot =  INT_MIN, cur = 0;
	for(long long i = 0; i < n; i++){
		cur += a[i];
		tot = max(tot, cur);
		cur = max(cur, 0LL);
	}
	cout << tot << "\n";
}