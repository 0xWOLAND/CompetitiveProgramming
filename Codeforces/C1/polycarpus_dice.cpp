#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, A;
	cin >> n >> A;
	long long d[n], tot = 0;
	for(int i = 0; i < n; i++){
		cin >> d[i];
		tot += d[i];
	}

	for(int i = 0; i < n; i++){
		long long cant_up, cant_low, others_sum;

		cant_up = max(0LL, d[i] - (A - (n - 1)));
		others_sum = tot - d[i];
		cant_low = A - min(others_sum, A - 1) - 1;
		cout << (cant_up + cant_low) << " ";
	}	
}