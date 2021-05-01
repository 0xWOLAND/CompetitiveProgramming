#include <bits/stdc++.h>
using namespace std;
const int nax = 150420;
bool vis[nax];
vector<int> adj[nax];
typedef long long ll;
void dfs(int src, ll &num_edges, ll &num_vertices){
	assert(!vis[src]);
	num_vertices++;
	num_edges += adj[src].size();
	vis[src] = true;
	for(auto i: adj[src]){
		if(!vis[i]){
			dfs(i, num_edges, num_vertices);
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(int i = 1; i <= n; i++){
		ll num_edges, num_vertices;
		num_edges = num_vertices = 0;
		if(!vis[i]){
			dfs(i, num_edges, num_vertices);

			if(num_edges != (num_vertices * (num_vertices - 1))){
				puts("NO");
				return 0;
			}
		}
	}
	puts("YES");
}