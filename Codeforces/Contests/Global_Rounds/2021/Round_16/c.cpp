#include <bits/stdc++.h>
using namespace std;

int t1(int n, string a, string b){
	int tot = 0;


	bool cur[3];
	memset(cur, 0, sizeof(cur));
	for(int i = 0; i < n; i++){
		if(cur[0] && (a[i] == '0' || b[i] == '0')){
			tot++;
		}
		else if(a[i] == '2' || b[i] == '2'){
			tot += (cur[0]);
			memset(cur, 0, sizeof(cur));
		}
		cur[a[i] - '0'] = 1;
		cur[b[i] - '0'] = 1;
		if(cur[0] && cur[1]){
			tot += 2;
			memset(cur, 0, sizeof(cur));
		}
	}
	return tot + cur[0];
}



int main() {
	int t; cin >>t;
	while(t--){
		int n;
		string a, b;
		cin >> n >> a >> b;
		cout << t1(n,a,b) << "\n";
	}
}