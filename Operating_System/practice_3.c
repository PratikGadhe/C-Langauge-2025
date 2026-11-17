// Implement FCFS CPU scheduling algorithm
#include <stdio.h>
int main()
{
    int n ; //number of process
    int bt[20]; //burst time
    int wt[20]; //waiting time 
    int tat[20]; //turn around time
    int avgwt = 0;
    int avgtat = 0;

    printf("Enter number of process : ");
    scanf("%d",&n);

    //user inputs for burst time(excuetion time)
    printf("--- Enter Burst time for each process ---\n"); //i => process
    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter burst time for P[%d] : ", i+1);
        scanf("%d",&bt[i]);
    }

    // calculate waiting time 
    wt[0]=0;
    for(int i = 1 ; i < n ; i++)
    {
        wt[i]=0;
        for(int j = 0 ; j < i ; j++)
        {
            wt[i]+=bt[j];
        }
    }

    printf("\nNo. of Process \t burst time \t waiting time \t turn around time \n");
    for(int i = 0 ; i < n ; i++)
    {
        tat[i] = wt[i]+bt[i];
        avgwt += wt[i];
        avgtat += tat[i];
        printf("P[%d]\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    avgwt/=n;
    avgtat/=n;
    printf("Average waiting time : %d\n",avgwt);
    printf("Average turn around time : %d\n",avgtat);
    return 0;
}