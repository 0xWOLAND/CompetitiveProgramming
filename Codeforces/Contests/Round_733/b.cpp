#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int h, w;
	cin >> h >> w;

	int perim = 2 * w + 2 * (h - 2);
	int a[perim];

	for(int i = 0; i < perim; i++){
		a[i] = (i + (bool)(w % 2 || h % 2)) % 2;
	}
	int k = 0;
	int board[h][w];
	memset(board, 0, sizeof(board));

	for(int i = 0; i < w; i++){
		board[0][i] = a[k++];
	}
	for(int i = 1; i < h; i++){
		board[i][w - 1] = a[k++];
	}
	for(int i = w - 2; i >= 0; i--){
		board[h - 1][i] = a[k++];
	}
	for(int i = h - 2; i > 0; i--){
		board[i][0] = a[k++];
	}

	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			if(board[i][j] == 1){
				bool flag = false;
				for(int u = max(0, i - 1); u <= i + 1 && u < h; u++){
					for(int v = max(0, j - 1); v <= j + 1 && v < w; v++){
						if(board[i][j] == board[u][v] && (i != u && v != j)){
							cout << 0;
							u = h;
							v = w;
							flag = true;
							board[i][j] = 0;
						}
					}
				}
				if(!flag){
					cout << 1;
				}
			}
			else{
				cout << 0;
			}
		}
		cout << "\n";
	}
	cout << "\n";
}

int main() {
	int T;
	cin >> T;
	while(T--){
		test_case();
	}
}