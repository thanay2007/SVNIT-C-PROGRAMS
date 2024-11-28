#include <stdio.h>

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, low_index, temp;

    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++)
    {
        low_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[low_index])
            {
                low_index = j;
            }
        }
        if (low_index != i)
        {
            temp = arr[i];
            arr[i] = arr[low_index];
            arr[low_index] = temp;
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
