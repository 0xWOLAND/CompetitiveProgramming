#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	unordered_set<int> adj[n];

	for(int i = 0; i < m; i++){
		int u, v;
		cin >> u >> v;
		u--;
		v--;
		adj[u].insert(v);
		adj[v].insert(u);
	}

	int q; cin >> q;
	while(q--){
		int type;
		cin >> type;
		if(type == 1){
			int u, v;
			cin >> u >> v;
			u--;
			v--;
			adj[u].insert(v);
			adj[v].insert(u);
		}
		else if(type == 2){
			int u, v;
			cin >> u >> v;
			u--;
			v--;
			adj[u].erase(v);
			adj[v].erase(u);
		}
		else{
			int vis = 0;
			int alive = (1 << n) - 1;
			for(int i = n - 1; i >= 0; i--){
				if((1 << i) & vis|| !((1 << i) & alive)) continue;
				stack<int> s;
				s.push(i);
				while(!s.empty()){
					auto node = s.top();
					s.pop();
					vis |= (1 << node);
					for(auto x: adj[node]){
						if(x > node){
							alive &= ~(1 << node);
						}
					}
					for(auto x: adj[node]){
						if(!((1 << x) & vis)){
							s.push(x);
						}
					}
				}
			}
			int ans = __builtin_popcount(alive);
			cout << ans << "\n";
		}
	}
}