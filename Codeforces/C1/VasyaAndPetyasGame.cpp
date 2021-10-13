#include <bits/stdc++.h>
using namespace std;
bool check(int n){
	int ans = 0;
	int i = 2;

	while(n > 1){
		if(n % i == 0){
			ans++;
			while(n % i == 0) n /= i;
		}
		i++;
	}
	return ans == 1;
}
int main() {
	int n; cin >> n;
	if(n == 1){
		printf("0\n");
		return 0;
	}
	vector<int> ans;
	for(int i = 2; i <= n; i+=2){
		if(check(i)){
			ans.push_back(i);
		}
	}
	for(int i = 3; i <= n; i+=2){
		if(check(i)){
			ans.push_back(i);
		}	
	}
	printf("%d\n", ans.size());
	for(auto x: ans){
		cout << x << " ";
	}

}