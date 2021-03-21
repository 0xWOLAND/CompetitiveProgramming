#include <bits/stdc++.h>
using namespace std;

bool hasBothChar(string s, char c){
    bool a = 0, b = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == toupper(c)) a = 1;
        if(s[i] == tolower(c)) b = 1;
    }
    return a == 1 && b == 1;
}

string longestNiceSubstring(string s) {
    cout << "String: " << s << "\n";
    if(s.length() < 2) return "";
    string ans = "";
    for(int i = 0; i < s.length(); i++){
        if(!hasBothChar(s, s[i])){
            string a = longestNiceSubstring(s.substr(0, i));
            string b = longestNiceSubstring(s.substr(i + 1));
            if(a.length() < b.length()){
                ans = b;

            }
            else {
                ans = a;
            }
        }
    }
    return ans;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << longestNiceSubstring(s) << "\n";

}
