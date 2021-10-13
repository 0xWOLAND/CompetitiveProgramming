#include <bits/stdc++.h>
using namespace std;

void tc(){
	int n; scanf("%d", &n);
	string s; cin >> s;

	int tot = (s[n - 1] - '0');
	s[n - 1] = '0';

	for(int i = n - 2; i >= 0; i--){
		if(s[i] != '0')
		tot += (s[i] - '0' + 1);
	}
	printf("%d\n", tot);
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		tc();
	}
}

/*
8
001678294039710047203946100020
000078294039710047203946100621

*/