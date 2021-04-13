#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<set<int> > tie(n + 1);
	int a, b;
	while(m--){
		cin >> a >> b;
		tie[a].insert(b);
		tie[b].insert(a);
	}

	int groups = 0;

	while(1){
		vector<int> v;
		for(int i = 1; i <= n; i++){
			if(tie[i].size() == 1){
				v.push_back(i);
			}
		}
		for(int i = 0; i < v.size(); i++){
			auto it = tie[v[i]].begin();
			tie[v[i]].clear();
			tie[*it].erase(v[i]);
		}
		if(v.size())groups++;
		else break;
	}
	printf("%d\n", groups);
}