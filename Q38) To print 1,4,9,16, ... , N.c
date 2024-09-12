#include <stdio.h>
#include <math.h>
int main()
{
    int number,i,n,a;

    printf("Enter a number to decide how long the series will be: \n");
    scanf("%d",&number);

    i = number-1;
    n = 1;
    printf("%d",n);

    while(i!=0)
    {
        n+=1;
        i-=1;
        a = pow(n,2);
        printf(",%d",a);
    }
    return 0;
}
