#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int> > adj, int n, int src){
    queue<int> q;
    vector<bool> vis(n);
    vector<int> d(n), p(n);

    q.push(src);
    vis[src] = true;
    p[src] = -1;

    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int u: adj[v]){
            if(!vis[u]){
                vis[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }

    // Get Shortest Path

    if(!vis[src]){
        cout << "No Path!\n";
    }
    else{
        vector<int> path;
        for(int v = src; v != -1; v = p[v]){
            path.push_back(v);
        }
        reverse(path.begin(), path.end());
        cout << "Path: ";
        for(int v: path){
            cout << v << " ";
        }
        cout << endl;
    }
}