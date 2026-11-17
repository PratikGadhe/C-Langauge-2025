//Implementation of SJF CPU scheduling algorithms
#include <stdio.h>
int main()
{
    int n ; //number of process
    int bt[20]; //execution time for each process
    int wt[20]; //waiting time
    int at[20]; //arrival time
    int tat[20]; //turn around time
    int avg_wt; //average waiting time
    int avg_tat; //average turn around time

    // ask user for input number of process
    printf("Enter number of process : ");
    scanf("%d",&n);

    // ask user for burst time of each process 
    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter burst time for P[%d] : ", i+1);
        scanf("%d",&bt[i]);
    }

    // sort the burst time array using selection sort
    int pos , temp;
    for(int i = 0 ; i < n ; i++)
    {
        pos = i;
        for(int j = i+1 ; j < n ; j++)
        {
            if(bt[j]<bt[i])
            {
                pos = j;
            }
        }
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
        // we have to swap the arrival time too based on what we have done for burst time swapping
        temp = at[i];
        at[i] = at[pos];
        at[pos] = at[i];
    }
    // calculate for waiting 
    wt[0] = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        wt[i] = 0 ;
        for(int j = 0 ; j < i ; j++)
        {
            wt[i]+=bt[j];
        }
    }

    // print the calculated part
    printf("\nProcess \t Burst Time \t Waiting Time \t TurnAround Time\n");
    for(int i = 0 ; i < n ; i++)
    {
        tat[i] = bt[i]+wt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
        printf("P[%d]\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }

    // average
    avg_wt/=n;
    avg_tat/=n;
    printf("Average waiting time : %d\n",avg_wt);
    printf("Average turn around time : %d\n",avg_tat);
    return 0;
}