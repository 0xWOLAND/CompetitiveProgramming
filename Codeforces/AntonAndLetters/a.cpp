#include <bits/stdc++.h>

using namespace std;

int main() {
    set<char> s;
    string str;
    getline(cin, str);
    for(int i = 1; i < str.length() - 1; i+=3){
        s.insert(str[i]);
    }
    cout << s.size() << "\n";
}
