#include <stdio.h>

int palin(int c)
{
    int rev = 0,rem;

    while (c!= 0) 
    {
        rem = c % 10;
        rev = rev * 10 + rem;
        c/= 10;
    }
    
    return rev;
}

int main() 
{
    int num, reverse = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    reverse = palin(num);

    if (num == reverse) 
    {
        printf("The number is a palindrome number\n");
    } 
    
    else 
    {
        printf("The number is not a palindrome number\n");
    }

    return 0;
}
