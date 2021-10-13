#include <bits/stdc++.h>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b){
    if( a<0 ) a = -a;
    if( b<0 ) b = -b;
    unsigned long long k = 0;
    while( b!=0 ){
        k+=a/b;
        a %= b;
        if( a==0 ) return k;
        k+=b/a;
        b %= a;
    }
    return k;
}

int main() {
	unsigned long long a, b;
	cin >> a >> b;
	cout << gcd(a,b) << "\n";
}

/*
a/b => 1 + a/b => (a + b) / b
a/b => 1/(b/a + a / a) = 1/(b + a) / a => a / (a + b)




a/b <= (a - b) / b
a/b <= a / (a - b)  
*/
