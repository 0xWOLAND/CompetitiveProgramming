#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;
typedef pair<int,int> pii;

/*
0 - wall
1 - nothing
2 - bessie
3 - O
4 - M
*/

int n;
pair<int, pii> arr[50][50];
vector<pii> starting_points;
map<pii, vector<pii>> graph;
queue<pii> q;
queue<pair<int, pii>> b;
pii bessie;
bool visited[50][50];
map<pair<int, pii>, bool> vboards;
bool gboards[20000];

pii adj[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int pow(int a, int b) {
  if (b == 0) {
    return 1;
  }
  int ret = pow(a, b/2);
  if (b % 2 == 0) {
    return ret * ret;
  } else {
    return ret * ret * a;
  }
}

bool in_grid(int grid, int move) {
  while (move >= 3) {
    grid /= 3;
    move /= 3;
  }
  return grid % 3 > 0;
}

void display_grid(int grid) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << grid % 3;
      grid /= 3;
    }
    cout << endl;
  }
}

int get_element(int grid, int ind) {
  grid /= pow(3, ind);
  return grid % 3;
}

bool check_winning(int grid) {
  for (int i = 0; i < 3; i++) {
    if (get_element(grid, 3*i) == 1 && get_element(grid, 3*i + 1) == 1 && get_element(grid, 3*i + 2) == 2) return true;
    if (get_element(grid, 3*i) == 2 && get_element(grid, 3*i + 1) == 1 && get_element(grid, 3*i + 2) == 1) return true;
    if (get_element(grid, i) == 1 && get_element(grid, i + 3) == 1 && get_element(grid, i + 6) == 2) return true;
    if (get_element(grid, i) == 2 && get_element(grid, i + 3) == 1 && get_element(grid, i + 6) == 1) return true;
  }
  if (get_element(grid, 0) == 1 && get_element(grid, 4) == 1 && get_element(grid, 8) == 2) return true;
  if (get_element(grid, 0) == 2 && get_element(grid, 4) == 1 && get_element(grid, 8) == 1) return true;
  if (get_element(grid, 2) == 1 && get_element(grid, 4) == 1 && get_element(grid, 6) == 2) return true;
  if (get_element(grid, 2) == 2 && get_element(grid, 4) == 1 && get_element(grid, 6) == 1) return true;
  return false;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < n; j++) {
      switch(s[3*j]) {
        case '#':
          arr[i][j] = {0, {0 ,0}};
          break;
        case '.':
          arr[i][j] = {1, {0, 0}};
          break;
        case 'B':
          arr[i][j] = {2, {0 ,0}};
          starting_points.push_back({i, j});
          bessie = {i,j};
          break;
        case 'O':
          arr[i][j] = {3, {s[3*j+1]-'0', s[3*j+2]-'0'}};
          starting_points.push_back({i, j});
          break;
        case 'M':
          arr[i][j] = {4, {s[3*j+1]-'0', s[3*j+2]-'0'}};
          starting_points.push_back({i, j});
          break;
      }
    }
  }
  for (pii p: starting_points) { 
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        visited[i][j] = false;
      }
    }
    visited[p.first][p.second] = true;
    q.push(p);
    while (!q.empty()) {
      pii curr = q.front();
      q.pop();
      for (pii dir : adj) {
        int nextm = curr.first + dir.first;
        int nextn = curr.second + dir.second;
        if (!visited[nextm][nextn]) {
          visited[nextm][nextn] = true;
          if (arr[nextm][nextn].first == 1) {
            q.push({nextm, nextn});
          }
          if (arr[nextm][nextn].first >= 2) {
            graph[p].push_back({nextm, nextn});
          }
        }
      }
    }
  }
  vboards[{0, bessie}] = true;
  gboards[0] = true;
  b.push({0, bessie});
  while (!b.empty()) {
    pair<int, pii> curr = b.front();
    b.pop();
    for (pii p : graph[curr.second]) {
      pair<int, pii> move = arr[p.first][p.second];
      int movetoint = (move.first-2)*pow(3, 3*move.second.first + move.second.second - 4);
      int newboard = curr.first;
      if (!in_grid(newboard, movetoint)) {
        newboard += movetoint;
      }
      if (!vboards[{newboard, p}]) {
        vboards[{newboard, p}] = true;
        gboards[newboard] = true;
        if (!check_winning(newboard)) {
          b.push({newboard, p});
        }
        else{
          display_grid(newboard);
        }
      }
    }
  }

  int tot = 0;
  for (int i = 0; i < pow(3, 9); i++) {
    if (gboards[i] && check_winning(i)) {
      tot++;
    } 
  }
  cout << tot << endl;
}