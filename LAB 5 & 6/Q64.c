#include <stdio.h>
int main() 
{
    int a[3][3], sum_r1 = 0, sum_r2 = 0, sum_r3 = 0;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (i == 0) 
            {
                sum_r1 += a[i][j];
            } 
            else if (i == 1) 
            {
                sum_r2 += a[i][j];
            } 
            else 
            {
                sum_r3 += a[i][j];
            }
        }
    }

    printf("Sum of the first row: %d\n", sum_r1);
    printf("Sum of the second row: %d\n", sum_r2);
    printf("Sum of the third row: %d\n", sum_r3);
    return 0;
}