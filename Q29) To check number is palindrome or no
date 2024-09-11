#include <stdio.h>
int main() 
{
    int number,temp,q,reversed_number;

    printf("Enter a number to check if it is a palindrome: ");
    scanf("%d",&number);

    temp = number;

    while (number!=0)
    {
        q=number%10;
        reversed_number=reversed_number*10+q;
        number/=10;
    }

    if(reversed_number==temp)
    {
        printf("It is a palindrom \n");
    }
    else
    {
        printf("It is not a palindrom \n");
    }
    
    return 0;
}
