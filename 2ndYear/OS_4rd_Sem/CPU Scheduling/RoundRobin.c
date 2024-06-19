#include <stdio.h>

int main(void)
{
    printf("Enter the number of processes: ");
    int n;
    scanf("%d", &n);

    printf("Enter the arrival time and burst times of %d processes:\n", n);
    int at[n], bt[n], remainingTime[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &at[i], &bt[i]);
        remainingTime[i] = bt[i];
    }

    printf("Enter the time quantum: ");
    int quant;
    scanf("%d", &quant);

    printf("\nThe round robin cpu scheduling is as:\n");

    int wt[n], tt[n];
    float waitingTime = 0, turnAroundTime = 0;
    int time, remProcess = n, i, flag = 0;
    for (time = 0, i = 0; remProcess != 0;)
    {
        if (remainingTime[i] <= quant && remainingTime[i] > 0)
        {
            time = time + remainingTime[i];
            remainingTime[i] = 0;
            flag = 1;
        }
        else if (remainingTime[i] > 0)
        {
            remainingTime[i] = remainingTime[i] - quant;
            time = time + quant;
        }

        if (remainingTime[i] == 0 && flag == 1)
        {
            remProcess--;
            printf("Process-%d:    Burst time-%d  Turnaround time-%d  Waiting time-%d\n", i + 1, bt[i], time - at[i], time - at[i] - bt[i]);
            waitingTime = waitingTime + time - at[i] - bt[i];
            turnAroundTime = turnAroundTime + time - at[i];
            flag = 0;
        }

        if (i == n - 1)
        {
            i = 0;
        }
        else if (at[i + 1] <= time)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }

    printf("\nThe average waiting time is: %0.2f", waitingTime / n);
    printf("\nThe average turn around time is: %0.2f", turnAroundTime / n);
}