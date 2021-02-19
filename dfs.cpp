#include <bits/stdc++.h>
using namespace std;

void dfsUtil(vector<int> arr[], bool visited[], int curr){
    visited[curr] = 1;
    for(auto ele: arr[curr]){
        if(!visited[ele]){
    cout << "Visited : " << ele << "\n";
            dfsUtil(arr, visited, ele);
        }
    }
}
void dfs(vector<int> arr[]){
   bool visited[4];
  for(int i = 0; i < 4; i++){
    visited[i] = 0;
  } 
  dfsUtil(arr, visited, 0);
}



int main() {
    vector<int> arr[4] = {
        {1, 3},
        {3, 2},
        {0, 1},
        {0, 1},
    };

    dfs(arr);
}
