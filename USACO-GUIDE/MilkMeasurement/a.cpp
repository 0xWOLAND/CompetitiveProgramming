#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream fin("measurement.in");
	ofstream fout("measurement.out");
	int n, g;
	fin >> n >> g;
	vector<vector<int>> cows(n, vector<int>(3));

	for(int i = 0; i < n; i++){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		cows[i] = {a,b,c};
	}	

	sort(cows.begin(), cows.end());
	int ans = 0;
	map<int, int, greater<int>> scoreKeeper;
	map<int, int> milkProduced;
	scoreKeeper[0] = n;
	for(int i = 0; i < n; i++){
		int &current_cow = milkProduced[cows[i][1]];
		int numTop = scoreKeeper.begin()->second;
		current_cow += cows[i][2];
		scoreKeeper[current_cow - cows[i][2]]--;
		if(numTop != scoreKeeper.begin()->second || current_cow > scoreKeeper.begin()->first){
			ans++;
		}
		scoreKeeper[current_cow]++;
		
	}
	fout << ans << "\n";
}