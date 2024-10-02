#include <stdio.h>
int main()
{
    int number,i,n;

    printf("Enter a number to decide how long the series will be: \n");
    scanf("%d",&number);

    i = number-1;
    n = 2;
    printf("%d",n);

    while(i!=0)
    {
        n+=2;
        i-=1 ;
        printf(",%d",n);
    }
    return 0;
}
