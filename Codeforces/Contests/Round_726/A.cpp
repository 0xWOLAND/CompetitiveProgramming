#include <bits/stdc++.h>
using namespace std;

void test_case(){
    int n; cin >> n;
    long long tot = 0, k;

    for(int i = 0; i < n; i++){
    	cin >> k;
    	tot += k;
    }
    if(tot < n){
    	cout << 1 << "\n";
    }
    else{
    	cout << abs(tot - n)  << "\n";
    }
}

int main() {
    int T;
    cin >> T;
    while(T--){
        test_case();
    }
    return 0;
}