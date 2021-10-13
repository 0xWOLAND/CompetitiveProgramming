#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int W, H;
	scanf("%d %d", &W, &H);
	int x1, y1, x2, y2;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	int w, h;
	scanf("%d %d", &w, &h);

	int y = max(y1 - h, H - y2 - h);

	int x = max(x1 - w, W - x2 - w);

	float ans = -1;

	if(y < 0){
		if(!((y == y1 - h && H - y2 < abs(y1 - h)) || (y == H - y2 - y && abs(H - y2 - y) > y1))){
			ans = abs(y);
		}
	}
	if(x < 0){
		if((x == x1 - w && W - x2 < abs(x1 - w)) || (x == W - x2 - x && abs(W - x2 - x) > x1)){
			if(ans == -1){	
				cout << "-1\n";
				return;
			}
		}
		ans = min(ans, (float) abs(x));	
	}

	cout << ans <<"\n";
}

int main() {
	int T; cin >> T;
	while(T--){
		test_case();
	}
}