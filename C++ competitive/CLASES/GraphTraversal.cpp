/*
 * Clase 3: Graph Traversal Implementation
 * 
 * This program demonstrates both Depth-First Search (DFS) and
 * Breadth-First Search (BFS) algorithms on a graph.
 * 
 * Algorithm: Graph traversal algorithms (DFS and BFS)
 * Purpose: Educational implementation for learning graph algorithms
 */

#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list
    
public:
    Graph(int vertices) : V(vertices) {
        adj.resize(V);
    }
    
    // Add edge to the graph
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected graph
    }
    
    // Depth-First Search
    void DFS(int start) {
        vector<bool> visited(V, false);
        cout << "DFS starting from vertex " << start << ": ";
        DFSUtil(start, visited);
        cout << endl;
    }
    
    void DFSUtil(int vertex, vector<bool>& visited) {
        visited[vertex] = true;
        cout << vertex << " ";
        
        for(int neighbor : adj[vertex]) {
            if(!visited[neighbor]) {
                DFSUtil(neighbor, visited);
            }
        }
    }
    
    // Breadth-First Search
    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> q;
        
        visited[start] = true;
        q.push(start);
        
        cout << "BFS starting from vertex " << start << ": ";
        
        while(!q.empty()) {
            int vertex = q.front();
            cout << vertex << " ";
            q.pop();
            
            for(int neighbor : adj[vertex]) {
                if(!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main(){
    // Create a sample graph
    Graph g(6);
    
    // Add edges to create a sample graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    
    cout << "Graph Traversal Algorithms Demo" << endl;
    cout << "===============================" << endl;
    
    // Demonstrate both algorithms
    g.DFS(0);
    g.BFS(0);
    
    return 0;
}
