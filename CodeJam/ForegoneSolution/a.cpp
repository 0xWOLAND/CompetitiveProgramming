#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull; 

void solve(){
	string s;
	cin >> s;
	int n = s.length();
	
	string a(s), b(n, '0');
	for(int i = 0; i < n; i++){
		if(s[i] == '4'){
			a[i] = '3';
			b[i] = '1';
		}
	}
	b.erase(0, b.find_first_not_of('0'));
	if(b.length() > 0){
		cout << a << " " << b << "\n";
	}
	else {
		cout << a << " 0\n";
	}
}

int main() {
	int T; cin >> T;
	for(int i = 1; i <= T; i++){
		printf("Case #%d: ", i);
		solve();
	} 
}
