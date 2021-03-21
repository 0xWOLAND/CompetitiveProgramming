#include <bits/stdc++.h>
using namespace std;

#define INF 99999

void addEdge(vector<pair<int, int>> adj[], int u,
             int v, int wt)
{
    adj[u - 1].push_back(make_pair(v - 1, wt));
}

int minDistance(int dist[], bool visited[]){
    int min = INF, min_index;
    for(int v = 0; v < 6; v++){
        if(!visited[v] && dist[v] <= min){
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// A utility function to print the constructed distance array 
void printSolution(int dist[]) 
{ 
    printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < 6; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 

void dijkstra(vector<pair<int, int> > adj[], int V){
    int src = 0;
    bool visited[V];
    int dist[V];
    for(int i = 0; i < V; i++){
        visited[i] = 0;
        dist[i] = INF;
    }
    dist[src] = 0;
    for(int tmp = 0; tmp < V; tmp++){
        int u = minDistance(dist, visited);
        visited[u] = true;
        for(auto v = adj[u].begin(); v != adj[u].end(); v++){
            if(!visited[v->first] && dist[u] != INF && dist[u] + v->second < dist[v->first]){
                dist[v->first] = dist[u] + v->second;
            }
        }
    }
        printSolution(dist); 

}



void printGraph(vector<pair<int,int> > adj[], int V) 
{ 
    int v, w; 
    for (int u = 0; u < V; u++) 
    { 
        cout << "Node " << u << " makes an edge with \n"; 
        for (auto it = adj[u].begin(); it!=adj[u].end(); it++) 
        { 
            v = it->first; 
            w = it->second; 
            cout << "\tNode " << v << " with edge weight = "
                 << w << "\n"; 
        } 
        cout << "\n"; 
    } 
} 

int main()
{
    int V = 6;
    vector<pair<int, int>> adj[V];
    addEdge(adj, 1, 2, 2);
    addEdge(adj, 1, 3, 4);
    addEdge(adj, 2, 3, 1);
    addEdge(adj, 2, 4, 7);
    addEdge(adj, 3, 5, 3);
    addEdge(adj, 4, 6, 1);
    addEdge(adj, 5, 4, 2);
    addEdge(adj, 5, 6, 5);
    
    printGraph(adj, V);
    dijkstra(adj, V);
    return 0;
}
