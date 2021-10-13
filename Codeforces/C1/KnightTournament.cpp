// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	int n, m;
// 	cin >> n >> m;

// 	int a[n];

// 	memset(a, 0, sizeof(a));

// 	while(m--){
// 		int l, r, x;
// 		scanf("%d %d %d", &l, &r, &x);

// 		l--;
// 		r--;

// 		for(int i = l; i <= r; i++){
// 			if(!(i == x - 1 || a[i] != 0)){
// 				a[i] = x;
// 			}
// 		}
// 	}

// 	for(int i = 0; i < n; i++){
// 		printf("%d ", a[i]);
// 	}
// 	cout << "\n";
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int ans[n];
	memset(ans, 0, sizeof(ans));
	set<int> available;
	for(int i = 0; i < n; i++){
		available.insert(i);
	}

	for(int T = 0; T < m; T++){
		int l, r, x;
		cin >> l >> r >> x;
		l--;
		r--;
		vector<set<int>::iterator> to_delete;
		for(auto i = available.lower_bound(l); *i <= r && i != available.end(); i++){
			if(*i == x - 1){
				continue;
			}
			else{
				ans[*i] = x;
				to_delete.push_back(i);
			}
		}
		for(auto itr: to_delete){
			available.erase(itr);
		}
	}

	for(int i = 0; i < n; i++){
		printf("%d ", ans[i]);
	}
	cout << endl;
	return 0;
}