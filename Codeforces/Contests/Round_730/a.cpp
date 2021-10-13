#include <bits/stdc++.h>
using namespace std;


void test_case(){
	long long a, b;
	cin >> a >> b;
	if(a < b){
		swap(a,b);
	}
	long long diff = abs(a - b);
	if(diff == 0){
		printf("0 0\n");
		return;
	}
	if(b == 0){
		cout << a << " " << a << "\n";
		return;
	}
	long long u = (((a / diff + 1) * diff)) - a;
	long long v = a % diff;
	cout << diff << " " << min(u, v) << "\n";
}

int main() {
	long long T; cin >> T;
	while(T--){
		test_case();
	}
}