#include <iostream>
using namespace std;

void breadthFirstSearch(int **graph, int vertices, int startVertex) {
    // Write your code here
    bool *visited = new bool[vertices];
    for(int i=0;i<vertices;i++)
        visited[i] = false;
    visited[startVertex] = true;
    int *queue = new int[vertices];
    int front = 0, rear = 0;
    queue[rear++] = startVertex;
    while(front < rear) {
        int currentVertex = queue[front];
        cout << currentVertex << " ";
        front++;
        for(int i=0;i<vertices;i++) {
            if(i == currentVertex)
                continue;
            if(graph[currentVertex][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = true;
            }
        }
    }
    delete [] visited;
    delete [] queue;
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
    breadthFirstSearch(graph, n, startVertex);
    for(int i=0;i<n;i++)
        delete [] graph[i];
    delete [] graph;
}