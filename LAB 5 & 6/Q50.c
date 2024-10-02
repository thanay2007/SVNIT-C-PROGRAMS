#include <stdio.h>
int main()
{

    int i,j,ascii_code,n;
    printf("Enter the number of rows you want to print for the pattern: \n");
    scanf("%d",&n);

    ascii_code = 65;

    for (i=1;i<=n;i++)
    {

        for (j=1;j<=i;j++)
        {
            printf("%c",ascii_code);
        }
      
        ascii_code+=1;
        printf("\n");
    }
    
}
