/*
WAP to implement minimum spanning tree using Prim's Algorithm
*/

#include <stdio.h>

#define INF 999
#define V 4

int main()
{
    int graph[V][V] = {
        {999, 10, 6, 5},
        {10, 999, 999, 15},
        {6, 999, 999, 4},
        {5, 15, 4, 999}
    };

    int visited[V] = {0};

    int ne = 0;          // number of edges selected
    int min_cost = 0;

    visited[0] = 1;      // start from vertex 0

    printf("Edges of Minimum Spanning Tree:\n");

    while(ne < V - 1)
    {
        int min = INF;
        int a = -1;
        int b = -1;

        // Find minimum edge
        for(int i = 0; i < V; i++)
        {
            if(visited[i])
            {
                for(int j = 0; j < V; j++)
                {
                    if(!visited[j] && graph[i][j] < min)
                    {
                        min = graph[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        // Select edge
        if(a != -1 && b != -1)
        {
            printf("(%d,%d) = %d\n", a, b, min);

            min_cost += min;

            visited[b] = 1;

            ne++;
        }
    }

    printf("Minimum Cost = %d\n", min_cost);

    return 0;
}

// #include <stdio.h>
// #define V 4
// #define inf 999

// int main()
// {
//     int graph[V][V] = {
//         {999, 10, 6, 5},
//         {10, 999, 999, 15},
//         {6, 999, 999, 4},
//         {5, 15, 4, 999}
//     };
    
//     int visited[V] = {0};

//     int ne , min_cost = 0;

//     visited[0] = 1;
//     printf("Minimum spanning tree : \n");
//     while(ne < V-1)
//     {
//         int min = inf;
//         int a = -1;
//         int b = -1;

//         for(int i = 0 ; i < V ; i++)
//         {
//             if(visited[i])
//             {
//                 for(int j = 0 ; j<V ; j++)
//                 {
//                     if(!visited[j] && graph[i][j] < min)
//                     {
//                         graph[i][j] = min;
//                         a = i;
//                         b = j;
//                     }
//                 }
//             }
//         }
//         if(a != -1 && b != -1)
//         {
//             printf("(%d , %d ) = %d\n",a,b,min);
//             min_cost += min;
//             visited[b] = 1;
//             ne++;
//         }
//     }
//     printf("minimum cost : %d\n",min_cost);
//     return 0;
// }