#include <stdio.h>

int main(void)
{
    printf("Enter the number of processes: ");
    int n;
    scanf("%d", &n);

    printf("Enter the burst times of %d processes: ", n);
    int bt[n], pid[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
        pid[i] = i + 1;
    }

    printf("\nThe sjf non pre-emptive cpu scheduling is as:\n");

    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (bt[j] < bt[index])
            {
                index = j;
            }
        }
        int temp = bt[i];
        bt[i] = bt[index];
        bt[index] = temp;

        temp = pid[i];
        pid[i] = pid[index];
        pid[index] = temp;
    }

    int wt[n], tt[n];
    float waitingTime = 0, turnAroundTime = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            wt[0] = 0;
        }
        else
        {
            wt[i] = bt[i - 1] + wt[i - 1];
        }
        tt[i] = bt[i] + wt[i];
        printf("Process-%d:    Burst time-%d  Turnaround time-%d  Waiting time-%d\n", pid[i], bt[i], tt[i], wt[i]);
        waitingTime += wt[i];
        turnAroundTime += tt[i];
    }

    printf("\nThe average waiting time is: %0.2f", waitingTime / n);
    printf("\nThe average turn around time is: %0.2f", turnAroundTime / n);
}