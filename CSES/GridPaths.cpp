#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<bool> > vvb;
bool vis[7][7];
int cnt = 0;
string s;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool in(int x, int y){
    return (0 <= x && x < 7) && (0 <= y && y < 7);
}

bool ok(int x, int y){
    return in(x,y) && !vis[x][y];
}
void pr(int x, int y){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if(i == x && j == y){
                printf("\033[1;33m%d\033[0m ", (int)(vis[i][j]));
            }
            else if(i == 6 && j == 0){
                printf("\033[1;34m%d\033[0m ", (int)(vis[i][j]));
            }
            else if(vis[i][j]){
                 cout << "\033[1;31m1\033[0m ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << "\n";
    }
    cout << '\n';
}

void dfs(int x, int y, int cur){
    if(!in(x,y) || cur > 48){
        vis[x][y] = 0;
        return;
    }
    if(x == 6 && y == 0){
        if(cur == 48){
            cnt++;
        }
        vis[x][y] = 0;
        return;
    }
    bool up = (in(x-1,y) && !vis[x - 1][y]);
    bool down = (in(x+1,y) && !vis[x + 1][y]); 
    bool left = (in(x,y-1) && !vis[x][y - 1]); 
    bool right = (in(x,y+1) && !vis[x][y + 1]); 
    if(((left == right) && (up == down))){
        vis[x][y] = 0;
        return;
    }
    vis[x][y] = 1;
    if(s[cur] == '?'){
        for(int i = 0; i < 4; i++){
            int X = x + dx[i];
            int Y = y + dy[i];
            // pr(X,Y);
            if(in(X, Y) && !vis[X][Y]) dfs(X, Y, cur + 1);
        }
    }
    else{
        int xx = x, yy = y;
        if(s[cur] == 'L') yy = y-1;
        else if(s[cur] == 'R') yy = y+1;
        else if(s[cur] == 'U') xx = x-1;
        else if(s[cur] == 'D') xx = x+1;

        if(in(xx,yy) && !vis[xx][yy]){
            dfs(xx,yy, cur + 1);
        }
    }
    vis[x][y] = 0;
}

int main() {
    cin >> s;
    memset(vis, 0, sizeof(vis));
    dfs(0,0, 0);
    cout << cnt << "\n";
}
