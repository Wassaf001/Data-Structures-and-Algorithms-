#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> adj[n+1];
  int u, v;
  for(int i=0; i<m; i++)
  {
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u); // Remove this line for directed graph
  }
  cout << "Your adjacency list is: " << endl;
  for(int i=0; i<=n; i++)
  {
    cout << i << " -> ";
    for(auto it: adj[i])
    { 
        cout << it << " ";
    }
    cout << endl;
  }
}