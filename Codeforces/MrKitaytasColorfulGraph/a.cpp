#include <bits/stdc++.h>
using namespace std;

int n, m;
bool adj[101][101][101];


bool bfs(int src, int to, int color){
	queue<int> q;
	q.push(src);
	bool vis[101][101];
	vis[src][src] = true;
	memset(vis, 0, sizeof(vis));
	while(!q.empty()){
		int node = q.front();
		q.pop();
		if(node == to){
			return true;
		}
		for(int i = 1; i <= 100; i++){
			if(adj[node][i][color] && !vis[node][i]){
				vis[node][i] = true;
				q.push(i);
			}
		}
	}
	return false;
}

int main() {
	cin >> n >> m;

	memset(adj, 0, sizeof(adj));
	for(int i = 0; i < m; i++){
		int u, v, w;
		cin >> u >> v >> w;
		adj[u][v][w] = 1;
		adj[v][u][w] = 1;
	}

	int Q;
	cin >> Q;

	while(Q--){
		int u, v;
		cin >> u >> v;
		int ans = 0;
		for(int i = 1; i <= 100; i++){
			ans += bfs(u, v, i);
		}
		cout << ans << "\n";
	}
}