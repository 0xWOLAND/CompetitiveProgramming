#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long p, d;
	cin >> p >> d;

	string s = to_string(p);
	string ans = "";
	for(int i = s.length() - 1, t = 0; i >= 0 && d > 0; i--, t++){
		unsigned long long k = ((s[i] - '0') + 1) * pow(10, t);
		if(s[i] == '9'){
			continue;
		}
		else if(d >= k){
			p -= k;
			d -= k;
		}
		else{
			break;
		}
		s = to_string(p);
	}
	cout << p << ans << "\n";
}
