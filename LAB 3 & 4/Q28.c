#include <stdio.h>
int main() 
{
    int number,temp,cube_sum,q;

    cube_sum = 0;

    printf("Enter a number to check if it is a armstrong: ");
    scanf("%d",&number);

    temp = number;

    while (number!=0)
    {
        q = number%10;
        number/=10;
        cube_sum+=q*q*q;
    }

    if (cube_sum==temp)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }

    return 0;
}
