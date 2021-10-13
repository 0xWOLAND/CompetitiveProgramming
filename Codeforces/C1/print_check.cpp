#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int r[n], c[m], x[k + 1];
	memset(r, 0, sizeof(r));
	memset(c, 0, sizeof(c));
	memset(x, 0, sizeof(x));
	for(int i = 1; i <= k; i++){
		int t, p;
		cin >> t >> p >> x[i];
		if(t == 1){
			r[--p] = i;
		}
		else{
			c[--p] = i;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << x[max(r[i], c[j])] << " ";
		}
		cout << "\n";
	}
}