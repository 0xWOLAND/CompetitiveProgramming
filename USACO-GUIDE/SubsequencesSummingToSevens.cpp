#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("div7.in");
    ofstream fout("div7.out");
    int n;
    fin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) fin >> arr[i];
    vector<int> prefix(n + 1);
    for(int i = 0; i < n; i++){
        prefix[i + 1] = (prefix[i] + arr[i]) % 7;
    }

    vector<int> check(7, -1);

    int ans = 0;
    for(int i = 1; i < n + 1; i++){
        if(check[prefix[i]] == -1) check[prefix[i]] = i;
        else ans = max(ans, i - check[prefix[i]]);
    }

    fout << ans << "\n";
    
}