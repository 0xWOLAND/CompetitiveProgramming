#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int main() {
	int n, x;
	cin >> n >> x;
	pii a[n];
	for(int i = 0; i < n; i++){
		int t; cin >> t;
		a[i] = {t, i + 1};
	}
	sort(a, a + n);
	int l = 0, r = n - 1;

	while(l < r){
		int tot = a[l].first + a[r].first;
		if(tot == x){
			printf("%d %d\n", a[l].second, a[r].second);
			return 0;
		}
		if(tot < x){
			l++;
		}
		else{
			r--;
		}
	}
	cout << "IMPOSSIBLE\n";
}