#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], ct[n], tat[n], wt[n], rt[n];

    for(i = 0; i < n; i++) {
        printf("Enter Arrival Time of P%d: ", i+1);
        scanf("%d", &at[i]);

        printf("Enter Burst Time of P%d: ", i+1);
        scanf("%d", &bt[i]);
    }

    int time = 0;
    int idle_time = 0;

    // FCFS Scheduling
    for(i = 0; i < n; i++) {

        if(time < at[i]) {
            idle_time += (at[i] - time);
            time = at[i];
        }

        rt[i] = time - at[i];   // Response Time

        time += bt[i];

        ct[i] = time;                          // Completion Time
        tat[i] = ct[i] - at[i];               // Turnaround Time
        wt[i] = tat[i] - bt[i];               // Waiting Time
    }

    // Display
    printf("\nP\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               i+1, at[i], bt[i], ct[i], tat[i], wt[i], rt[i]);
    }

    float avgTAT = 0, avgWT = 0, avgRT = 0;

    for(i = 0; i < n; i++) {
        avgTAT += tat[i];
        avgWT += wt[i];
        avgRT += rt[i];
    }

    avgTAT /= n;
    avgWT /= n;
    avgRT /= n;

    int total_time = time;

    float cpu_utilization = ((total_time - idle_time) / (float)total_time) * 100;

    printf("\nAverage Turnaround Time = %.2f", avgTAT);
    printf("\nAverage Waiting Time = %.2f", avgWT);
    printf("\nAverage Response Time = %.2f", avgRT);
    printf("\nCPU Utilization = %.2f%%\n", cpu_utilization);

    return 0;
}