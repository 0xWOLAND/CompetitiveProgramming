#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int main() {
    int n, m;
    cin >> n >> m;
    string board[n];
    set<pii> deleted;
    for(int i = 0; i < n; i++) cin >> board[i];

    for(int r = 0; r < n; r++){
        for(int c = 0; c < m; c++){
            for(int i = 0; i < n; i++){
                if(board[i][c] == board[r][c] && board[i][c] != '.' && i != r){
                    deleted.insert({make_pair(i, c), make_pair(r, c)});
                }
            }
            for(int i = 0; i < m; i++){
                if(board[r][i] == board[r][c] && board[r][i] != '.' && i != c){
                    deleted.insert({make_pair(r, i), make_pair(r, c)});
                }
            }

        }
    }

    for(int r = 0; r < n; r++){
        for(int c = 0; c < m; c++){
            if(deleted.find(make_pair(r, c)) == deleted.end()){
            cout << board[r][c];
            }
            
        }
    }

    
    
}