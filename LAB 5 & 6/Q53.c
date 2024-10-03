#include <stdio.h>

int main() 
{
    int n,i,j,k,leading_space,m,o,p;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &n);

    leading_space = n - 1;

    for (i = 1; i <= n; ++i) 
    {
        printf("\n");

        for (j = leading_space; j > 0; j--) 
        {
            printf(" ");
        }

        for (k = 1; k <= i; k++) 
        {
            printf("* ");
        }

        leading_space--;
    }

    leading_space = n - (n-1);

    for (m=n-1;m>0;--m)
    {
        printf("\n");
 
        for (o= leading_space; o > 0; o--) 
        {
            printf(" ");
        }
  
        for (p = 1; p <=m ; p++) 
        {
            printf("* ");
        }

        leading_space++;
    }
    return 0;
    
}
