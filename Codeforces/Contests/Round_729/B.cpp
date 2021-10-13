#include <bits/stdc++.h>
using namespace std;
// a * (x + b) + b
// ax + ab + b
void test_case(){
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	if((n % a) == 0 || (n % a) % b == 1){
		cout <<  "Yes\n";
	}
	else{
		cout <<  "No\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		test_case();
	}
}