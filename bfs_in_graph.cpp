#include <iostream> 
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> bfs;
    // Storing graph in adjacency-list
    vector<int> adj[n+1];
    int u, v;
    for(int i=0; i<m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>visited;
    visited.resize(n+1, false);
    queue<int> q;
    cout << "Enter starting node: ";
    int starting;
    cin >> starting;
    q.push(starting);
    visited[starting]=1;
    int val;
    while(!q.empty())
    {
      val = q.front();
      bfs.push_back(val);
      q.pop();
      for(auto it: adj[val])
      {
        if(!visited[it])
        { 
         visited[it] = true;   
         q.push(it);
        }
      }
    }
    cout << "Your bfs traversal of graph is: ";
    for(auto it: bfs)
    {
      cout << it << " ";
    }
    return 0;
}
