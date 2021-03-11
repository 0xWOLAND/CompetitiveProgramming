#include <bits/stdc++.h>
using namespace std;

void solve(int cs){
	int n;
	cin >> n;
	vector<vector<int>> mat(n, vector<int>(n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}
	
	int a = 0, b = 0, c = 0;
	vector<bool> check(n);
	
	for(int i = 0; i < n; i++) a += mat[i][i];
	
	for(int i = 0; i < n; i++){
		vector<bool> row(n + 1), col(n + 1);
		bool rowRepeated = false, colRepeated = false;
		for(int j = 0; j < n; j++){
			int u = mat[i][j], v = mat[j][i];
			if(row[u]) rowRepeated = 1;
			else row[u] = 1;
			
			if(col[v]) colRepeated = 1;
			else col[v] = 1;
		}
		if(rowRepeated) b++;
		if(colRepeated) c++;
	}
	
	printf("Case #%d: %d %d %d\n", cs, a, b, c);
	
}

int main() {
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		solve(i);
	}
}
