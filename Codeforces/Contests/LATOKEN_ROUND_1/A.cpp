#include <bits/stdc++.h>
using namespace std;
int n, m;
string board[51];
pair<int, int> first_loc(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] != '.'){
                return {i,j};
            }
        }
    }
    return {-1, -1};
}

string h(int n){
    string ans = "";
    for(int i = 0; i < n / 2; i++){
        ans += "WR";
    }
    if(n % 2 == 1){
        ans += "W";
    }
    return ans;
}

string rev(string s){
    if(s.length() % 2 == 0){
        return s[s.length() - 1] + s.substr(0, s.length() - 1);
    }
    else{
        for(int i = 0; i < s.length(); i++){
            s[i] = (s[i] == 'R' ? 'W' : 'R');
        }
    }
    return s;
}

int test_case() {
    cin >> n >> m;


    for(int i = 0; i < n; i++){
        cin >> board[i];
    }

    pair<int, int> loc  = first_loc();

    if(loc == make_pair(-1, -1)){
        for(int i = 0; i < n; i++){
            board[i] = (i % 2 == 0 ? h(m) : rev(h(m)));
        }
    }
    else{
        for(int i = 0; i < loc.first; i++){
            board[i] = (i % 2 == 0 ? h(m) : rev(h(m)));
        }
        // ....
        char cur = ((loc.second % 2 == 1 && board[loc.first][loc.second] == 'R') || (loc.second % 2 == 0 && board[loc.first][loc.second] == 'W') ? 'W' : 'R');
        for(int i = 0; i < m; i++){
            if(board[loc.first][i] != '.' && board[loc.first][i] != cur){
                cout << "NO\n";
                return 0;
            }
            board[loc.first][i] = cur;
            cur = (cur == 'W' ? 'R' : 'W');
        }
        bool startW = (board[0][0] == 'W' && loc.first + 1 % 2 == 0) || (board[0][0] == 'R' && loc.first + 1 % 2 == 1);
        for(int i = loc.first + 1; i < n; i++){
            string tmp = (startW ? h(m) : rev(h(m)));
            for(int j = 0; j < m; j++){
                if(board[i][j] != '.' && board[i][j] != tmp[j]){
                    cout <<  "NO\n";
                    return 0;
                }
            }
            board[i] = tmp;
            startW = !startW;
        }
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            cout << board[i] << "\n";
        }
    }
    return 0;
}

int main() {
    int T; cin >> T;
    while(T--){
        test_case();
    }
}