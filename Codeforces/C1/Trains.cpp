#include <bits/stdc++.h>
using namespace std;
long long gcd(int a, int b){
    if( a<0 ) a = -a;
    if( b<0 ) b = -b;
    while( b!=0 ){
        a %= b;
        if( a==0 ) return b;
        b %= a;
    }
    return a;
}

int main() {
	int a, b;
	cin >> a >> b;
	 long long target = gcd(a,b);

	if(abs(a/target - b/target) == 1){
		cout << "Equal\n";
	}
	else{
		if(abs(a/target) > abs(b/target)){
			cout << "Dasha\n";
		}
		else{
			cout << "Masha\n";
		}
	}
}