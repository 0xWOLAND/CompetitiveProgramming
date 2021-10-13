#include <bits/stdc++.h>
using namespace std;

void test_case(){
	int n; cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	int s_a = 0, s_b = 0;
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	int i;
	for(i = 0; i < n - n / 4; i++){
		s_a += a[i];
		s_b += b[i];
	}

	if(s_a >= s_b){
		cout << "0\n";
		return;
	}
	else{
		int ans = 0;
		while(s_a < s_b){
			s_a += 100;
			if(i < n){
				s_b += b[i];
			}
			i++;
			ans++;
		}
		cout << ans << "\n";

	}
}

int main() {
	int T;
	 cin >> T;
	 while(T--){
	 	test_case();
	 }
}