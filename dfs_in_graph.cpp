#include <iostream>
#include <vector>
using namespace std;

void dfs_traversal(int node, vector<int> &dfs, vector<int> adj[], vector<bool>&visited)
{
    visited[node]=true;
    dfs.push_back(node);
    for(auto it: adj[node])
    {
        if(!visited[it])
        {
            dfs_traversal(it, dfs, adj, visited);
        }
    }  
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> dfs;
    // Storing graph in adjacency-list
    vector<int>adj[n+1];
    int u, v;
    for(int i=0; i<m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited;
    visited.resize(n+1, false);
    int start;
    cout << "Enter the starting node: ";
    cin >> start;
    dfs_traversal(start, dfs, adj, visited);
    cout << "Your dfs traversal is: ";
    for(auto i: dfs)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}