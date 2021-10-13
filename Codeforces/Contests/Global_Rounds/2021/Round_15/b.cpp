#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n;
	cin >> n;
	int a[n][5];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < 5; j++){
			cin >> a[i][j];
		}
	}

	if(n <= 3){
		int cur_winner = 0;
		for(int i = 0; i < n; i++){
			if(a[i][0] < a[cur_winner][0]){
				cur_winner = i;
			}
		}
		for(int i = 1; i < 5; i++){
			int winner_rank = a[cur_winner][i];
			for(int j = 0; j < n; j++){
				if(a[j][i] < winner_rank){
					cout << -1 << "\n";
					return;
				}
			}
		}
		cout << cur_winner + 1 << "\n";
	}
	else{
		vector<pair<int, int> > res[5];
		int stnd[n][n];
		memset(stnd, 0, sizeof(stnd));
		for(int mthn = 0;  mthn < 5; mthn++){
			for(int i = 0; i < n; i++){
				res[mthn].push_back({a[i][mthn], i});
			}
			sort(res[mthn].begin(), res[mthn].end());
			for(auto x: res[mthn]){
				
			}
		}
	}
}

int main(){
	int T; cin >> T;
	while(T--){
		test_case();
	}

}