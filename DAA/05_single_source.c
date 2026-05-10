/*
wap to implement single source shortest path algorithm
*/
#include <stdio.h>

#define V 4
#define inf 999

int min_distance(int dist[], int visited[])
{
    int min = inf, min_index = -1, i;

    for (i = 0; i < V; i++)
    {
        if (visited[i] == 0 && dist[i] <= min)
        {
            min = dist[i];
            min_index = i;
        }
    }

    return min_index;
}

void dijkstras(int graph[V][V], int source)
{
    int distance[V];
    int visited[V];

    for (int i = 0; i < V; i++)
    {
        distance[i] = inf;
        visited[i] = 0;
    }

    distance[source] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = min_distance(distance, visited);
        visited[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && graph[u][v] && distance[u] != inf &&
                distance[u] + graph[u][v] < distance[v])
            {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }

    printf("Vertex \t Distance from source\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d\t%d\n", i, distance[i]);
    }
}

int main()
{
    int graph[V][V] = {
        {0, 2, 0, 6},
        {2, 0, 3, 8},
        {0, 3, 0, 0},
        {6, 8, 0, 0}
    };

    int source = 0;
    dijkstras(graph, source);

    return 0;
}