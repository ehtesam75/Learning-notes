#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(int n, vector<vector<int>>& adj) {
    vector<int> visited(n, 0);
    visited[0] = 1;            
    queue<int> q;
    q.push(0);

    vector<int> ans;           

    while (!q.empty()) {
        int front = q.front();  
        q.pop();                 
        ans.push_back(front);   

        for (int i = 0; i < adj[front].size(); i++) {
            int element = adj[front][i];
            if (!visited[element]) {  
                visited[element] = 1;  
                q.push(element);        
            }
        }
    }

    return ans; 
}

int main() {
    int n, e;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> e;

    vector<vector<int>> adj(n); 

    cout << "Enter u, v for every edges:" << endl;
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v; 
        adj[u].push_back(v); 
        adj[v].push_back(u); 
    }

    vector<int> answer = bfs(n, adj); 

    cout << "BFS Traversal Order: ";
    for (int i : answer) {
        cout << i << " "; 
    }
    cout << endl;

    return 0;
}


/*
5
4
0 1
0 2
1 3
3 4


*/
