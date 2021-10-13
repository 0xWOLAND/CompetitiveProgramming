#include <bits/stdc++.h>
using namespace std;
const unsigned long long mx = 1e7;
bool prime[mx];

void SieveOfEratosthenes()
{
	const unsigned long long n = 1e6 + 5;
    memset(prime, true, sizeof(prime));
 
    for (unsigned long long p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (unsigned long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
 

bool ok(unsigned long long a){
	unsi gned long long q = sqrt(a);
	return q * q == a && a != 1;
}

bool ok2(unsigned long long a){
	unsigned long long q = sqrt(a);
	return prime[q];	
}

int main() {
	unsigned long long n; cin >> n;
	SieveOfEratosthenes();
	while(n--){
		unsigned long long a; cin >> a;
		if(ok(a) && ok2(a)){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}