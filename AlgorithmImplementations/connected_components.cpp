#include <bits/stdc++.h>
using namespace std;

int n;
const int MAXN = 1e5;
vector<int> g[MAXN];
bool vis[MAXN];
vector<int> comp;

void dfs(int v){
    vis[v] = true;
    comp.push_back(v);
    for(auto to: g[v]){
        if(!vis[to]){
            dfs(to);
        }
    }
}

void find_comps(){
    for(int i =0 ; i < n; i++){
        vis[i] = false;
    }
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            comp.clear();
            dfs(i);
            cout << "Component: ";
            for(auto j: comp){
                cout << j << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    return 0;
}