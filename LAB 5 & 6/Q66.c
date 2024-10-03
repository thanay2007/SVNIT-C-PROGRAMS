#include <stdio.h>
int main() 
{
    int a1[3][3], a2[3][3], sum[3][3];
    printf("Enter elements of the first 3x3 matrix:\n");
  
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }

    printf("Enter elements of the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
          {
            scanf("%d", &a2[i][j]);
          }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          sum[i][j] = a1[i][j] + a2[i][j];
        }
    }
    printf("Resultant Matrix:\n");

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
