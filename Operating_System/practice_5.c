#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d",&n);
    // if (scanf("%d", &n) != 1 || n <= 0) {
    //     printf("Invalid number of processes.\n");
    //     return 1;
    // }

    // Declare arrays AFTER n is read and validated
    int bt[n];
    int p[n];
    int index[n];

    for (int i = 0; i < n; i++) {
        printf("Enter burst time for P[%d]: ", i + 1);
        scanf("%d", &bt[i]);
        printf("Enter priority for P[%d]: ", i + 1);
        scanf("%d", &p[i]);
        index[i] = i + 1;
    }

    // Sort processes by priority (higher value = higher priority)
    for (int i = 0; i < n; i++) {
        int best_p = p[i];
        int m = i;
        for (int j = i + 1; j < n; j++) {
            if (p[j] > best_p) {
                best_p = p[j];
                m = j;
            }
        }
        if (m != i) {
            swap(&bt[i], &bt[m]);
            swap(&p[i], &p[m]);
            swap(&index[i], &index[m]);
        }
    }

    int t = 0;
    printf("\nOrder of process execution:\n");
    for (int i = 0; i < n; i++) {
        printf("P%d is executed from %d to %d\n", index[i], t, t + bt[i]);
        t += bt[i];
    }

    int wait_time = 0;
    float total_wt = 0, total_tat = 0;
    printf("\nProcess ID\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        int tat = wait_time + bt[i];
        printf("P[%d]\t\t%d\t\t%d\t\t%d\t\t%d\n", index[i], p[i], bt[i], wait_time, tat);
        total_wt += wait_time;
        total_tat += tat;
        wait_time += bt[i];
    }

    printf("\nAverage Waiting Time: %.2f\n", total_wt / n);
    printf("Average Turnaround Time: %.2f\n", total_tat / n);

    return 0;
}
