#include <bits/stdc++.h>
using namespace std;

vector<string> solutions;

int len;

void func(vector<char> vec, string tmp){
        for(int i = 0; i < vec.size(); i++){
            tmp += vec[i];
            vec.erase(vec.begin() + i, vec.begin() + i + 1);
            solutions.push_back(tmp);
            func(vec, tmp);
        }
}

void solve(string str){
    vector<char> vec;
    for(int i = 0; i < str.length(); i++){
        vec.push_back(str[i]);
    }
    func(vec, "");

}

int main() {
    string str;
    cin >> str;
    len = str.length();
    solve(str);
    for(int i = 1; i <= solutions.size(); i++){
        printf("%d\t%s\n", i, solutions[i - 1].c_str());
    }
    return 0;
}
