#include <stdio.h>

int main()
{
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int lenA = sizeof(A) / sizeof(A[0]);
    int lenB = sizeof(B) / sizeof(B[0]);
    int lenC = lenA + lenB;
    int C[lenC];

    int i = 0, j = 0, k = 0;
    while (i < lenA && j < lenB)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    while (i < lenA)
    {
        C[k++] = A[i++];
    }
    while (j < lenB)
    {
        C[k++] = B[j++];
    }
    printf("Merged array: ");
    for (i = 0; i < lenC; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
