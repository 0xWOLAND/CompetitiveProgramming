#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 3; i <= n; i++){
		if(n % i == 0){
			for(int j = 0; j < n; j++){
				int k = j;
				if(a[j] == 0) continue;
				do{
					// printf("%d %d\n", k, j);
					k += (n / i);
					k %= n;
				}while(a[k] == 1 && k != j);
				if(k == j){
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
}