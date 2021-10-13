#include <bits/stdc++.h>
using namespace std;

int n, m;
const int mx = 1e5;
int cats[mx];
vector<int> adj[mx];
bool vis[mx];

int dfs(int src, int cnt){
	if(cats[src]){
		cnt++;
	}
	else{
		cnt = 0;
	}
	if(cnt > m){
		return 0;
	}
	else if(adj[src].size() == 1 && !vis[src]){
		return 1;
	}
	vis[src] = 1;
	int ans = 0;
	for(auto x: adj[src]){
		if(!vis[x]){
			ans += dfs(x, cnt);
		}
	}
	return ans;
}

int main() {
	scanf("%d %d", &n, &m);
	memset(vis, 0, sizeof(vis));
	for(int i = 0; i < n; i++){
		scanf("%d", &cats[i]);
	}


	for(int i = 0; i < n - 1; i++){
		int u, v;
		scanf("%d %d", &u, &v);
		u--;
		v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vis[0] = 1;
	cout << dfs(0, 0) << "\n";
}