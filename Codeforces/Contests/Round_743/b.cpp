#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5;

int a[mx], b[mx];

void tc(){
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	int tot = 1e6;
	for(int i = 0; i < n; i++){
		if(b[i] > a[0]){
			tot = i;
			break;
		}
	}
	cout << tot << "\n";
}

int main() {
	int T; scanf("%d", &T);
	while(T--){
		tc();
	}
}