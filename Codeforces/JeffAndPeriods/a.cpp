#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	map<int, pair<int, int> > a;
	vector<int> non;
	for(int i = 0; i < n; i++){
		int k; cin >> k;
		if(a.count(k) == 0){
			a[k] = {i, 0};
		}
		else{
			if(a[k].second == 0){
				a[k] = {i, i - a[k].first};
			}
			else if(a[k].first + a[k].second == i){
				a[k] = {i, a[k].second};
			}
			else{
				a[k] = {-2, -2};
				non.push_back(k);
			}
		}
	}
	for(auto i: non){
		a.erase(i);
	}
	cout << a.size() << "\n";
	for(auto i: a){
		printf("%d %d\n", i.first, i.second.second);
	}

}