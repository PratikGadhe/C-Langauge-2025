/*
Implementation of Floyd-Warshall Algorithm for All-Pairs Shortest Path
*/
#include <stdio.h>

#define V 4
#define inf 999
int min_distance(int a , int b)
{
    return a < b ? a : b ;
}
void floyd_warshall(int graph[V][V])
{
    int dist[V][V];
    for(int i = 0 ; i < V ; i++)
    {
        for(int j = 0 ; j<V ; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }

    for(int k = 0 ; k < V ; k++)
    {
        for(int i = 0 ; i < V ; i++)
        {
            for(int j = 0 ; j < V ; j++)
            {
                dist[i][j] = min_distance(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }

    for(int i = 0 ; i < V ; i++)
    {
        for(int j = 0 ; j < V ; j++)
        {
            if(dist[i][j] == inf)
            {
                printf("inf\t");
            }
            else
            {
                printf("%d\t",dist[i][j]);
            }
        }printf("\n");
    }
}
int main()
{
    int graph[V][V]={
        {0,5,inf,10},
        {inf,0,3,inf},
        {inf,inf,0,1},
        {inf,inf,inf,0}
    };
    floyd_warshall(graph);
    return 0;
}