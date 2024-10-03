#include <stdio.h>
int main()
{
    int n,N,i,max,min;
    printf("How many numbers will you enter: \n");
    scanf("%d",&n);

    if(n<2)
    {
        printf("Please enter more than 2");
        return 1;
    }

    printf("Enter a number: \n");
    scanf("%d",&N);
    max = N;
    min = N;
    for (i=2;i<=n;++i)
    {
        printf("Enter a number: \n");
        scanf("%d",&N);
        if (max<N)
        {
            max = N;
        }
            
        else if (N<min)
        {
            min = N;
        }
    }
    printf("%d is the largest between the given numbers \n",max);
    printf("%d is the smallest between the given numbers \n",min);
}
