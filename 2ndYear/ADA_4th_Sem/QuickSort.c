#include <stdio.h>
#include <time.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(void)
{
    int n;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    int arr[n];

    // printf("Enter the elements: ");
    // for (int i = 0; i < n; i++)
    //     scanf("%d", &arr[i]);

    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    clock_t st, end;
    st = clock();
    quickSort(arr, 0, n - 1);
    end = clock();
    double time_taken = (((double)(end - st)) / CLOCKS_PER_SEC);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nTime taken: %lf micro seconds\n", time_taken * 1000000);
}
