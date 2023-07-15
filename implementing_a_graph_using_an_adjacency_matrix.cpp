#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int adj[n+1][m+1];
  for(int i=0; i<=n+1; i++)
  {
    for(int j=0; j<=m+1; j++)
    {
      adj[i][j]=0;
    }
  }
  int u, v;
  for(int i=0; i<m; i++)
  { 
    cin >> u >> v;
    adj[u][v]=1;
    adj[v][u]=1; // For directed-graph remove this line
  }
  cout << "Your adjacency_matrix is: " << endl;
  for(int i=0; i<=n+1; i++)
  {
    for(int j=0; j<=m+1; j++)
    {
        cout << adj[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}