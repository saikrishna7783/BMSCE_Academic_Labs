#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    printf("Enter the number of processes: ");
    int n;
    scanf("%d", &n);

    printf("Enter the burst time and priority of %d processes:\n", n);
    int bt[n], p[n], pid[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &bt[i], &p[i]);
        pid[i] = i + 1;
    }

    printf("\nThe priority cpu scheduling is as:\n");

    int m;
    for (int i = 0; i < n - 1; i++)
    {
        m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (p[j] > p[m])
            {
                m = j;
            }
        }
        swap(&p[i], &p[m]);
        swap(&bt[i], &bt[m]);
        swap(&pid[i], &pid[m]);
    }

    float waitingTime = 0, turnAroundTime = 0;
    int wt[n], tt[n];
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