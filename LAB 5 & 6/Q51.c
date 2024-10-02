#include <stdio.h>
int main()
{
    int n_1,i,n,j;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d",&n);

    n_1 = 0;
    for (i=0;i<n;i++)
    {
        printf("\n");
        for (j=0;j<n;j++)
        {
            if (j==n_1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        n_1+=1;

    }
}
