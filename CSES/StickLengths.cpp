#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	long long a[n];
	long long avg = 0;
	for(long long i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	avg = a[n / 2];
	long long tot = 0;
	for(long long i = 0; i < n; i++){
		tot += abs(a[i] - avg);
	}
	cout << tot << "\n";
}