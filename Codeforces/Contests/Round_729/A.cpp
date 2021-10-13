#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n; cin >> n;
	n *= 2;
	int a[n];

	for(int i = 0; i < n; i++) cin >> a[i];

	int even = 0, odd = 0;
	
	for(int i = 0; i < n; i++){
		if(a[i] & 1){
			odd++;
		}
		else{
			even++;
		}
	}
	if(even == odd){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		test_case();
	}
}