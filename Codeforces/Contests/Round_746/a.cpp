#include <bits/stdc++.h>
using namespace std;

long long test_case(vector<long long> w, long long n, long long H){
	if(w[n - 1] >= H) return 1;
	long long bg = w[n - 1] + w[n - 2];
	long long t = H / bg;
	if(H % bg && t * bg < H) t++;

	if(t * bg - w[n - 2] >= H){
		t = 2 * t - 1;
	}
	else{
		t *= 2;
	}
	return t;
}

long long t2(vector<long long> w, long long n, long long H){
	reverse(w.begin(), w.end());
	long long i = 0;
	long long tot = 0;
	while(H > 0){
		tot++;
		H -= w[i % 2];
		i++;
	}
	return tot;
}
// 22 / (7 + 2)
// 2 * H = k * (w[n - 1] + w[n - 2]);
// H = w[n - 1] * u + w[n - 2] * v;
// u = v + 1
int main() {
	
		long long n = 100, H, u, v;
		for(H = 1; H < 100000; H++){
			vector<long long> w(n);
			for(long long i = 0; i < n; i++){
				w[i] = (rand() % 10000000);
			}
			sort(w.begin(), w.end());
			if ((u = test_case(w, n, H)) != (v = t2(w,n,H))){
				cout << "FOUND: \n";
				cout << n << " " << H << "\n";
				cout << u << " " << v << "\n";
				for(long long i = 0; i < n; i++){
					cout << w[i] << " ";
				}
				cout << "\n";
			}
		}
		
	
}