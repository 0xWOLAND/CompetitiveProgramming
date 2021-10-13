#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	sort(a, a + n);
	set<int> s;
	for(int i = 0; i < n; i++){
		if(a[i] % k != 0){
			s.insert(a[i]);
		}
		else{
			if(s.count(a[i] / k)){
				continue;
			}
			else{
				s.insert(a[i]);
			}
		}
	}
	cout << s.size() << "\n";
}	