#include <bits/stdc++.h>
using namespace std;
bool cmp(vector< long long> a, vector< long long> b){
	for(int i = 0; i < a.size(); i++){
		if(i == b.size() || a[i] > b[i]) return true;
		else if(a[i] < b[i]) return false;
	}

	return false;
}
void p(string s){
	cout << s << "\n";
}

int main() {
	 long long n; cin >> n;

	vector< long long> a, b;
	 long long tot = 0, flag = 1;

	for(int i = 0; i < n; i++){
		 long long k; cin >> k;
		tot += k;
		if(k < 0){
			b.push_back(-k);
			flag = 2;
		}
		else{
			a.push_back(k);
			flag = 1;
		}
	}

	if(tot > 0){
		p("first");
	}
	else if(tot < 0){
		p("second");
	}
	else if(cmp(a, b)){
		p("first");
	}
	else if(cmp(b, a)){
		p("second");
	}
	else if(flag == 1){
		p("first");
	}
	else if(flag == 2){
		p("second");
	}
}