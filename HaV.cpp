#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> ans(n);
	for(int i = 0; i < n; i++) cin >> ans[i];
	vector<bool> isHill(n, 0);

	int numHill = 0;
	for(int i = 1; i < n - 1; i++){
		if(ans[i - 1] < ans[i] && ans[i] > ans[i + 1]){
			numHill++;
			isHill[i] = 1;
		} 
		else if(ans[i - 1] > ans[i] && ans[i] < ans[i + 1]){
			numHill++;
			isHill[i] = 1;
		} 
	}
	for(int i = 1; i < n - 1; i++){
		if(isHill[i - 1] && isHill[i] && isHill[i + 1]){
			cout << (numHill - 3) << "\n";
			return;
		}
	}
	cout << max(0, numHill - 1) << "\n";
	
}

int main() {
	int T; cin >> T;
	while(T--){
		solve();
	}
}
