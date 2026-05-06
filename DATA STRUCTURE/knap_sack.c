#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int profit[] = {100, 20, 60, 40};
    int weight[] = {3, 2, 4, 1};
    int n = 4;
    int W = 5;

    int K[5][6];
    

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= W; j++)
        {
            if(i == 0 || j == 0)
                K[i][j] = 0;
            else if(weight[i-1] <= j)
                K[i][j] = max(profit[i-1] + K[i-1][j-weight[i-1]], K[i-1][j]);
            else
                K[i][j] = K[i-1][j];
        }
    }

    printf("Maximum Profit = %d\n", K[n][W]);

    return 0;
} 