#include <bits/stdc++.h>
using namespace std;

bool vis[501][501];
string board[501];
int n, m, k;

vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};

bool ok(int x, int y){
	return (0 <= x && x < n) && (0 <= y && y < m) && !vis[x][y] && board[x][y] == '.';
}

void dfs(int x, int y){
	if(vis[x][y]){
		return;
	}
	vis[x][y] = 1;

	for(int i = 0; i < 4; i++){
		if(ok(x + dx[i], y + dy[i])){
			dfs(x + dx[i], y + dy[i]);
		}
	}

	if(k > 0 && board[x][y] == '.'){
		k--;
		board[x][y] = 'X';
	}
}

int main() {
	cin >> n >> m >> k;

	for(int i = 0; i < n; i++){
		cin >> board[i];
	}
	memset(vis, 0, sizeof(vis));

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(k){
				dfs(i, j);
			}
		}
	}

	for(int i = 0; i < n; i++){
		cout << board[i] << "\n";
	}

}