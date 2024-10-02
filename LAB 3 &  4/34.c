#include <stdio.h>
int main()
{
    int number,n_1,n_2,n_3;

    printf("Enter the number of how long you want the FIBONACCI series you want: ");
    scanf("%d",&number);

    n_1 = 0;
    n_2 = 1;
    n_3 = n_1+n_2;

    printf("%d,%d,%d",n_1,n_2,n_3);

    while (number>0)
    {
        n_1 = n_2;
        n_2 = n_3;
        n_3 = n_1+n_2;
        printf(",%d",n_3);
        number-=1;
    }

    return 0;
}
