#include <stdio.h>
#include <stdbool.h>

struct Process
{
    int pid;
    int bt;
    int art;
};

int main(void)
{
    printf("Enter the number of processes: ");
    int n;
    scanf("%d", &n);

    printf("Enter the burst times and arrival times of %d processes:\n", n);
    struct Process proc[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &proc[i].bt, &proc[i].art);
        proc[i].pid = i + 1;
    }

    int wt[n], tat[n], total_wt = 0, total_tat = 0, rt[n];
    for (int i = 0; i < n; i++)
    {
        rt[i] = proc[i].bt;
    }

    int complete = 0, t = 0, minm = 99999;
    int shortest = 0, finish_time;
    bool check = false;

    while (complete != n)
    {

        for (int j = 0; j < n; j++)
        {
            if ((proc[j].art <= t) && (rt[j] < minm) && rt[j] > 0)
            {
                minm = rt[j];
                shortest = j;
                check = true;
            }
        }

        if (check == false)
        {
            t++;
            continue;
        }

        rt[shortest]--;
        minm = rt[shortest];

        if (minm == 0)
            minm = 99999;

        if (rt[shortest] == 0)
        {

            complete++;
            check = false;
            finish_time = t + 1;
            wt[shortest] = finish_time - proc[shortest].bt - proc[shortest].art;
            if (wt[shortest] < 0)
            {
                wt[shortest] = 0;
            }
        }
        t++;
    }

    for (int i = 0; i < n; i++)
    {
        tat[i] = proc[i].bt + wt[i];
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("Process-%d:    Burst time-%d  Turnaround time-%d  Waiting time-%d\n", proc[i].pid, proc[i].bt, tat[i], wt[i]);
    }

    printf("Average waiting time: %0.2f", (float)total_wt / (float)n);
    printf("\nAverage turn around time: %0.2f", (float)total_tat / (float)n);
}
