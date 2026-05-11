// /*
// wap to implement minimum spanning tree using krushkals algorithm
// */
// #include <stdio.h>

// #define max 10
// int parent[max];

// int find(int i)
// {
//     while(parent[i])
//     {
//         i = parent[i];
//     }
//     return i;
// }

// int uni(int i , int j)
// {
//     if(i != j)
//     {
//         parent[j] = i;
//         return 1;
//     }
//     return 0;
// }

// int main()
// {
//     int i,j,a,b,u,v,ne = 1;
//     int min , min_cost = 0;
//     int n = 4;
//     int cost[10][10] = {
//         {0,0,0,0},
//         {0,999,10,6,5},
//         {0,10,999,999,15},
//         {0,6,999,999,4},
//         {0,5,15,4,999}
//     };
//     printf("edges of minimum spanning tree \n");
//     while(ne < n)
//     {
//         min = 999;
//         for(i=1;i<=n;i++)
//         {
//             for(j=1;j<=n;j++)
//             {
//                 if(cost[i][j] < min)
//                 {
//                     min = cost[i][j];
//                     a=u=i;
//                     b=v=j;
//                 }
//             }
//         }
//         u = find(u);
//         v = find(v);
//         if(uni(u,v))
//         {
//             printf("%d edge (%d,%d) = %d",ne++,a,b,min);
//             min_cost+=min;
//         }
//         cost[a][b] = cost[b][a] = 999;
//     }
//     printf("minimum cost = %d",min_cost);
//     return 0;
// }

#include <stdio.h>
#define max 10
int parent[max];

int find(int i)
{
    while(parent[i])
    {
        i = parent[i];
    }
    return i;
}
int uni(int i , int j)
{
    if(i != j)
    {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main()
{
    int i,j,a,b,u,v,ne = 1;
    int min, min_cost = 0;
    int n = 4;
    int cost[max][max]={
        {0,0,0,0,0},
        {0,999,10,6,5},
        {0,10,999,999,15},
        {0,6,999,999,4},
        {0,5,15,4,999}
    };
    printf("Edges of the minimum spanning tree : \n");
    while(ne < n)
    {
        min = 999;
        for(i = 1 ; i<=n ; i++)
        {
            for(j = 1 ; j<= n ; j++)
            {
                if(cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if(uni(u,v))
        {
            printf("%d edge(%d , %d) = %d\n",ne++,a,b,min);
            min_cost+=min;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("Minimum cost : %d\n",min_cost);
    return 0;
}