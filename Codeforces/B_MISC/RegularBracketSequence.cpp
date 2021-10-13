#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k = 0, ans = s.length();

    for( long long i = 0; i < s.length(); i++){
        if(s[i] == '(') k++;
        else k--;


        if(k < 0){
            ans--;
            k = 0;
        }
    }

    ans -= max(0, k);

    cout << ans << "\n";
    
}