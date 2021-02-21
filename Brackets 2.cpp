#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter String: ";
    cin >> str;
    stack<char> s;
    map<char, char> mp;
    mp.insert(pair<char, char>('[', ']'));
    mp.insert(pair<char, char>('(', ')'));
    mp.insert(pair<char, char>('{', '}'));
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '[' || str[i] == '{' || str[i] == '('){
            s.push(str[i]);
        }
        else{
            if(s.size() == 0){
                cout << "Extra Character\n";
                return 0;
            }
            else {
                char t = s.top();
                s.pop();
                if(mp[t] != str[i]){
                    cout << "Invalid String\n";
                    return 0;
                }
            }
        }
    }

    cout << "Valid String\n";
    return 0;
}
