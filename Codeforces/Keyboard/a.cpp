#include "bits/stdc++.h"
using namespace std;
int n, m, X;

string board[51];
vector<pair<int, int> >  shifts;

int dist(int x1, int y1, int x2, int y2){
    return (abs(x2 - x1) * abs(x2 - x1) + abs(y2 - y1) * abs(y2 - y1));
}


void solve(){
    scanf("%d%d%d", &n,&m,&X);
    for(int i = 0; i < n; i++) cin >> board[i];
    int ans = 0;

    int len;
    cin >> len;
    string s;
    cin >> s;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 'S'){
                shifts.push_back(make_pair(i, j));
            }
        }
    }


    for(int t = 0; t < len; t++){
        char cur = s[t];
        bool didLowerCase = false;
        if(cur < 97){
            didLowerCase = true;
            cur += 32;
        }
        int x = -1,y = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] == cur){
                    x = i;
                    y = j;
                }
            }
        }
        if((x == -1 || y == -1)){
            cout << (-1) << "\n";
            return;
        }
        else if((shifts).size() == 0 && didLowerCase){
            cout << (-1) << "\n";
            return;   
        }
        else if(cur >= 97 && !didLowerCase){
            continue;
        }
        int low = dist(x,y,shifts[0].first, shifts[0].second);
        for(auto i: shifts){
            int k = dist(x,y,i.first, i.second);
            low = min(low, k);
        }
        if(X * X < low){
            ans++;
        }
    }
    cout << (ans) << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    // setIO();
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
