#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    printf("Enter the number of requests: ");
    int n;
    scanf("%d", &n);

    printf("Enter the request sequence: ");
    int req[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &req[i]);
    }

    printf("Enter the initial head position: ");
    int head;
    scanf("%d", &head);

    printf("Enter the total disk size: ");
    int size;
    scanf("%d", &size);

    printf("Enter the head movement direction (high = 1 and low = 0): ");
    bool dir;
    scanf("%d", &dir);

    printf("\nThe look seek sequence is as: ");
    int headmovement = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (req[j] > req[j + 1])
            {
                int temp;
                temp = req[j];
                req[j] = req[j + 1];
                req[j + 1] = temp;
            }
        }
    }

    int index;
    for (int i = 0; i < n; i++)
    {
        if (head < req[i])
        {
            index = i;
            break;
        }
    }

    if (dir)
    {
        for (int i = index; i < n; i++)
        {
            printf("%d ", req[i]);
            headmovement += abs(req[i] - head);
            head = req[i];
        }

        for (int i = index - 1; i >= 0; i--)
        {
            printf("%d ", req[i]);
            headmovement += abs(req[i] - head);
            head = req[i];
        }
    }
    else
    {
        for (int i = index - 1; i >= 0; i--)
        {
            printf("%d ", req[i]);
            headmovement += abs(req[i] - head);
            head = req[i];
        }

        for (int i = index; i < n; i++)
        {
            printf("%d ", req[i]);
            headmovement += abs(req[i] - head);
            head = req[i];
        }
    }

    printf("\nTotal head movement is: %d\n", headmovement);
}