#include <bits/stdc++.h>
using namespace std;

int board[505][505];
int n, m;
const int mx = 1e5 + 5;
vector<bool> prime(mx + 1);


void SieveOfEratosthenes()
{
	fill(prime.begin(), prime.end(), true);
	prime[0] = prime[1] = false;
    for (int p = 2; p * p <= mx; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= mx; i += p)
                prime[i] = false;
        }
    }
}
 

bool ok(int cnt){
	for(int i = 0; i < n; i++){
		int tot = 0;
		for(int j = 0; j < m; j++){
			if(prime[board[i][j]]){
				continue;
			}
			else{
				int k = distance(prime.begin(), find(prime.begin() + board[i][j], prime.end(), true));
				tot += (k - board[i][j]);
			}
		}
		if(tot <= cnt) return true;
	}

	for(int j = 0; j < m; j++){
		int tot = 0;
		for(int i = 0; i < n; i++){
			if(prime[board[i][j]]){
				continue;
			}
			else{
				int k = distance(prime.begin(), find(prime.begin() + board[i][j], prime.end(), true));
				tot += (k - board[i][j]);
			}
		}
		if(tot <= cnt) return true;
	}
	return false;
}

int main() {
	cin >> n >> m;
	SieveOfEratosthenes();
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> board[i][j];
		}
	}
	int l = 0, r = mx;
	while(l < r){
		int mid = (l + r) / 2;
		if(ok(mid)){
			r = mid;
		}
		else{
			l = mid + 1;
		}
	}
	cout << l << "\n";
}