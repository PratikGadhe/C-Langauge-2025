#include <stdio.h>
int main()
{
    /*
        n = size
        bt = burst time
        wt = waiting time 
        tat = turn around time
        avwt = average waiting time 
        avtat = average turn around time
    */
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter total number of processes(maximum20):");
    scanf("%d",&n);

    // enter the burst time of each process 
    printf("Enter Process Burst Time\n");
    for(i = 0 ; i < n ; i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
    // initial value of waiting time will be zero 
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]+=bt[j];
        }
    }
    printf("\nProcessBurst \t TimeWaiting \t TimeTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    avwt/=i;
    avtat/=i;
    printf("\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d\n",avtat);
    return 0;
}