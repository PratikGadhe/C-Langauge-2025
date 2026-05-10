/*
wap to implement job sequencing algorithm
*/
#include <stdio.h>

struct job
{
    int id;
    int deadline;
    int profit;
};

void sort_profit(struct job jobs[], int n)
{   
    struct job temp;
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(jobs[i].profit < jobs[j].profit)
            {
                temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }
}
int main()
{
    //predifined
    struct job jobs[] = {
        {1,2,100},
        {2,1,19},
        {3,2,27},
        {4,1,25},
        {5,3,15}
    };
    int n = 5;
    int max_deadline = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(jobs[i].deadline > max_deadline)
        {
            max_deadline = jobs[i].deadline;
        }
    }

    sort_profit(jobs , n);

    int slot[max_deadline];

    for(int i = 0 ; i<max_deadline ; i++)
    {
        slot[i] = -1;
    }

    int total_profit = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = jobs[i].deadline - 1 ; j>=0 ; j--)
        {
            if(slot[j] == -1)
            {
                slot[j] = jobs[i].id;
                total_profit += jobs[i].profit;
                break;
            }
        }
    }

    for(int i = 0 ; i<max_deadline ; i++)
    {
        if(slot[i] != -1)
        {
            printf("J%d\t",slot[i]);
        }
    }printf("\n");
    printf("%d\n",total_profit);
    return 0;
}