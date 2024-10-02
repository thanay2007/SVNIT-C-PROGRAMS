#include <stdio.h>
int main() 
{
    int a, b, c;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    printf("Enter the third number: ");
    scanf("%d", &c);
    
    
    if (a > b && a > c) 
    {
        printf("%d is the greatest between the three\n", a);
    } 
    else if (b > c && b > a) 
    {
        printf("%d is the greatest between the three\n", b);
    } 
    else if (c > a && c > b) 
    {
        printf("%d is the greatest between the three\n", c);
    } 
    else 
    {
        printf("All of them are equal\n");
    }

    return 0;
}
