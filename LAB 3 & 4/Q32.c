#include <stdio.h>
int main()
{
    int n,N,i,max,second_max;
    printf("How many numbers will you enter: \n");
    scanf("%d",&n);

    if(n<2)
    {
        printf("Please enter more than 2 or equal to 2");
        return 1;
    }

    printf("Enter a number: /n");
    scanf("%d",&N);

    max = N;
    second_max = N;
    for (i=2;i<=n;++i)
    {
        printf("Enter a number: /n");
        scanf("%d",&N);
        if (max>N&&N>second_max){
            second_max = N;
        }
        else if (N>max)
        {
            second_max = max;
            max = N;
        }
    }
    printf("The largest number among the given numbers is %d \n",max);
    printf("The 2nd largest number among the given number is %d \n",second_max);
}
