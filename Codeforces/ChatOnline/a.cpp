#include <bits/stdc++.h>
using namespace std;

const int mxn = 55;
int af[mxn], as[mxn], bf[mxn], bs[mxn];
int l, r, p, q;


bool test(int t){
	for(int i = 0; i < p; i++){
		for(int j = 0; j < q; j++){
			if(af[i] > bs[j] + t) continue;
			if(bf[j] + t > as[i]) continue;
			return true;
		}
	}
	return false;
}

int main() {
	cin >> p >> q >> l >> r;

	for(int i = 0; i < p; i++){
		cin >> af[i] >> as[i];
	}

	for(int i = 0; i < q; i++){
		cin >> bf[i] >> bs[i];
	}
	int ans = 0;
	for(int i = l; i <= r; i++){
		ans += test(i);
	}
	cout << ans << "\n";
}