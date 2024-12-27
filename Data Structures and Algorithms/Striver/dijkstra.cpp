#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;
const int = 1e9;

vector<int> shortestPath(vector<vector<pair<int, int>>>& adj, int N, int src) {
    vector<int> dist(N, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dist[src] = 0;
    
    while(!pq.empty()) {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        for(auto i : adj[node]) {
            int node = i.first;
            int weight = i.second;
            
            if(distance + weight < dist[node]) {
                dist[node] = distance + weight;
                pq.push({dist[node], node});
            }
        }
    }
    
    for(int i = 0; i < N; i++) {
        if(dist[i] == INT_MAX) {
            dist[i] = -1;
        }
    }
    
    return dist;
}

int main() {
    int n, e, src;
    cout << "Enter number of nodes, edges, and source node : ";
    cin >> n >> e >> src;
    vector<vector<pair<int, int>>> adj(n);
    
    cout << "Enter u, v, w for each nodes : " << endl;
    for(int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); 
    }
    
    vector<int> result = shortestPath(adj, n, src);
    

    cout << endl << "Shortest distances from source node" << endl;
    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}

/*
smaple input
5 6 0
0 1 2
0 2 4
1 3 7
1 4 3
2 3 1
3 4 2
*/
