#include <bits/stdc++.h>
using namespace std;

void solve(){
	int N, K;
	scanf("%d %d", &N, &K);
	if(N == 2){
		cout << "IMPOSSIBLE\n";
		return;
	}
	
	vector<vector<int>> board(N, vector<int>(N));
}


int main() {
	int T; cin >> T;
	for(int i = 1; i <= T; i++){
		printf("Case #%d: ", i);
		solve();
	}
}
