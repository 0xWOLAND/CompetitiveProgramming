#include <bits/stdc++.h>
using namespace std;

int main() {
	int a1, a2, a3, a4, a5, a6;
	scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6);
	int ans = (pow(a1 + a2 + a3, 2) - pow(a1, 2) - pow(a3, 2) - pow(a5, 2));
	cout << ans << "\n";
}