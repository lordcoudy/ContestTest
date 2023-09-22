#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<vector<int>> graph(n, vector<int>(n, 0));

  for(int i=0; i<m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    graph[u-1][v-1] = w;
    graph[v-1][u-1] = w;
  }

  int min_weight = INT_MAX;

  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(graph[i][j] > 0 && graph[i][j] < min_weight) {
        min_weight = graph[i][j];
      }
    }
  }

  cout << min_weight << endl;

  return 0;
}

