#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    printf("Enter the number of requests: ");
    int n;
    scanf("%d", &n);

    printf("Enter the initial head position: ");
    int head;
    scanf("%d", &head);

    printf("Enter the total disk size: ");
    int size;
    scanf("%d", &size);

    printf("Enter the request sequence: ");
    int queue[n], queue1[n], queue2[n], temp, temp1 = 0, temp2 = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);

        if (temp > head)
        {
            queue1[temp1] = temp;
            temp1++;
        }
        else
        {
            queue2[temp2] = temp;
            temp2++;
        }
    }

    printf("Enter the head movement direction (high = 1 and low = 0): ");
    bool dir;
    scanf("%d", &dir);

    printf("\nThe scan seek sequence is as: ");
    int headmovement = 0;

    for (int i = 0; i < temp1 - 1; i++)
    {
        for (int j = i + 1; j < temp1; j++)
        {
            if (queue1[i] > queue1[j])
            {
                temp = queue1[i];
                queue1[i] = queue1[j];
                queue1[j] = temp;
            }
        }
    }

    for (int i = 0; i < temp2 - 1; i++)
    {
        for (int j = i + 1; j < temp2; j++)
        {
            if (queue2[i] < queue2[j])
            {
                temp = queue2[i];
                queue2[i] = queue2[j];
                queue2[j] = temp;
            }
        }
    }

    int i, j;
    if (dir)
    {
        queue[0] = head;
        for (i = 1, j = 0; j < temp1; i++, j++)
        {
            queue[i] = queue1[j];
        }
        queue[i] = size - 1;

        for (i = temp1 + 2, j = 0; j < temp2; i++, j++)
        {
            queue[i] = queue2[j];
        }
        queue[i] = 0;

        for (j = 0; j <= n; j++)
        {
            headmovement += abs(queue[j + 1] - queue[j]);
            printf("\n%d -> %d: %d", queue[j], queue[j + 1], abs(queue[j + 1] - queue[j]));
        }
    }
    else
    {
        queue[0] = head;
        for (i = 1, j = 0; j < temp2; i++, j++)
        {
            queue[i] = queue2[j];
        }
        queue[i] = 0;

        for (i = temp2 + 2, j = 0; j < temp1; i++, j++)
        {
            queue[i] = queue1[j];
        }
        queue[i] = size - 1;

        for (j = 0; j <= n; j++)
        {
            headmovement += abs(queue[j + 1] - queue[j]);
            printf("\n%d -> %d: %d", queue[j], queue[j + 1], abs(queue[j + 1] - queue[j]));
        }
    }

    printf("\nTotal head movement is: %d\n", headmovement);

    return 0;
}