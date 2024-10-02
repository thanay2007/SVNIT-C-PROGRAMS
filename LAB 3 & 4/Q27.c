#include <stdio.h>

int main() 
{
    int N,factors,i;
    factors = 0;

    printf("Enter a number to check if it is a prime number: ");
    scanf("%d",&N);

    for (i=1;i<=N;++i)
    {
        if (N%i==0)
        {
            factors+=1;
        }
    }
        if (factors>2)
        {
            printf("It is a composite number");
        }
        else if (factors==2)
        {
            printf("It is a prime number");
        }
    return 0;
}
