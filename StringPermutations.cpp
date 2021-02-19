#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter String: ";
    vector<string> perms;
    cin >> str;
    sort(str.begin(), str.end());
    while(next_combination(str.begin(), str.end())){
            perms.push_back(str);
        }

    for(int i = 0; i < perms.size(); i++){
        printf("%d: %s\n", (i + 1), perms[i].c_str());
    }
    return 0;
}
