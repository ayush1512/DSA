#include <iostream>
using namespace std;
void depthFirstSearch(int **graph, int vertices, int startVertex, bool *visited) {
    // Write your code here
    cout << startVertex << " ";
    visited[startVertex] = true;
    for(int i=0;i<vertices;i++) {
        if(i == startVertex)
            continue;
        if(graph[startVertex][i] == 1 && !visited[i])
            depthFirstSearch(graph, vertices, i, visited);
    }
}

int main() {
    int n;
    int e;
    cin >> n >> e;
    int **graph = new int*[n];
    for(int i=0;i<n;i++) {
        graph[i] = new int[n];
        for(int j=0;j<n;j++)
            graph[i][j] = 0;
    }
    for(int i=0;i<e;i++) {
        int s, f;
        cin >> s >> f;
        graph[s][f] = 1;
        graph[f][s] = 1;
    }
    int startVertex;
    cin >> startVertex;
    bool *visited = new bool[n];
    for(int i=0;i<n;i++)
        visited[i] = false;
    depthFirstSearch(graph, n, startVertex, visited);
    for(int i=0;i<n;i++)
        delete [] graph[i];
    delete [] graph;
    delete [] visited;
}