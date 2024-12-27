#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e8;

vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
    vector<int> dist(V, INF);
    dist[src] = 0;
    
    for(int i = 0; i < V - 1; i++) {
        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            
            if(dist[u] != INF && dist[u] + w < dist[v]) {
               dist[v] = dist[u] + w; 
            }
        }
    }
    
    for(auto edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        
        if(dist[u] != INF && dist[u] + w < dist[v]) {
           return {-1};
        }
    }
    
    return dist;
}

int main() {
    int v, e, src;
    cout << "Enter number of vertices: ";
    cin >> v;
    cout << "Enter number of edges: ";
    cin >> e;
    
    vector<vector<int>> edges;
    cout << "Enter u, v, w for every edges : " << endl;
    for(int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    
    cout << "Enter source vertex: ";
    cin >> src;

    vector<int> distances = bellmanFord(v, edges, src);

    if(distances.size() == 1 && distances[0] == -1) {
        cout << "Negative weight cycle detected!" << endl;
        return 0;
    }

    cout << "Shortest distances from source " << src << endl;
    for(int i = 0; i < v; i++) {
        if(distances[i] == INF) cout << "Vertex " << i << ": " << INF << endl;
        else cout << "Vertex " << i << ": " << distances[i] << endl;
    }
return 0;
}


/**
 sample input
5
8
0 1 -1
0 2 4
1 2 3
1 3 2
1 4 2
3 2 5
3 1 1
4 3 -3
0

 */

