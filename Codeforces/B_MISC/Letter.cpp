#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    map<char, int> m;
    getline(cin, a);

    for (int i = 0; i < a.length(); i++){
        if(isalpha(a[i])){
            m[a[i]]++;
        }
    }
    getline(cin, b);

    for (int i = 0; i < b.length(); i++){
        if(isalpha(b[i]) && m[b[i]] == 0){
            cout << "NO\n";
            return 0;
        }
        else if(isalpha(b[i])){
            m[b[i]]--;
        }
    }

    cout << "YES\n";
}
