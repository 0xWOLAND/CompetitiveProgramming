#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; string s;
    cin >> n >> s;

    int A = 0, F = 0, I = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'A') A++;
        else if(s[i] == 'F') F++;
        else if(s[i] == 'I') I++;
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        if(s[i] != 'F'){
            if(s[i] == 'A' && I == 0) ans++;
            else if(s[i] == 'I' && I == 1) ans++;
        }
    }
    printf("%d\n", ans);
}