#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	const int A = a, B = b;
	int u, v;
	// if(a == 1 || b == 1){
	// 	u = 0;
	// }
	// else{
	// 	u = -1;
	// }
	int tot = min(a / 2, b / 2) * 4;
	for(int i = 0; i < min(A / 2, B / 2); i++){
		a -= 2;
		b -= 2;
	}
	if(a < b) swap(a, b);
	if(tot > 0){
		u = a, v = b;
		u += (tot / 4) + max(0, (tot / 4 - 1));
		v += (tot / 2);
	}
	else{
		u = a - b;
		v = b;
	}
	cout <<  u << " " << v << "\n";

}