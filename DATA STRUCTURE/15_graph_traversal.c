/*
Question 15: Write a program for implementation of graph traversals by applying:
(a) BFS (Breadth First Search) (b) DFS (Depth First Search)
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int adj[MAX][MAX];
int visited[MAX];
int n;

// Queue for BFS
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int item) {
    if (rear == MAX - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = item;
}

int dequeue() {
    if (front == -1 || front > rear) return -1;
    return queue[front++];
}

int isEmpty() {
    return front == -1 || front > rear;
}

void createGraph() {
    int i, j, edges, u, v;
    
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    
    // Initialize adjacency matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }
    
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    
    printf("Enter edges (u v):\n");
    for (i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // For undirected graph
    }
}

void BFS(int start) {
    int i, current;
    
    // Initialize visited array
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }
    
    // Reset queue
    front = rear = -1;
    
    printf("BFS Traversal starting from vertex %d: ", start);
    
    visited[start] = 1;
    enqueue(start);
    
    while (!isEmpty()) {
        current = dequeue();
        printf("%d ", current);
        
        for (i = 0; i < n; i++) {
            if (adj[current][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

void DFSUtil(int vertex) {
    int i;
    visited[vertex] = 1;
    printf("%d ", vertex);
    
    for (i = 0; i < n; i++) {
        if (adj[vertex][i] == 1 && visited[i] == 0) {
            DFSUtil(i);
        }
    }
}

void DFS(int start) {
    int i;
    
    // Initialize visited array
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }
    
    printf("DFS Traversal starting from vertex %d: ", start);
    DFSUtil(start);
    printf("\n");
}

void displayGraph() {
    int i, j;
    
    printf("Adjacency Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int choice, start;
    
    createGraph();
    
    do {
        printf("\n1. Display Graph\n2. BFS Traversal\n3. DFS Traversal\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                displayGraph();
                break;
            case 2:
                printf("Enter starting vertex for BFS: ");
                scanf("%d", &start);
                if (start >= 0 && start < n) {
                    BFS(start);
                } else {
                    printf("Invalid vertex\n");
                }
                break;
            case 3:
                printf("Enter starting vertex for DFS: ");
                scanf("%d", &start);
                if (start >= 0 && start < n) {
                    DFS(start);
                } else {
                    printf("Invalid vertex\n");
                }
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    
    return 0;
}