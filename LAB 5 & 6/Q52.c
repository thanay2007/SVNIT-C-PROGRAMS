#include <stdio.h>
int main()
{
    int i,j,k,l,leading_space,n;
    printf("Enter the number of rows you want to print of the pattern");
    scanf("%d",&n);

    leading_space = n-1;

    for (i=1;i<=n;i++)
    {
        printf("\n");
        for (j=1;j<=leading_space;j++)
        {
            printf(" ");

        }
        for (k=1;k<=i;k++)
        {
            printf("%d",k);  
        }
        for (l=i-1;l>0;l--)
        {
            if (i!=1)
            {
                printf("%d",l);
            }
        }
        leading_space-=1;
    }
}
