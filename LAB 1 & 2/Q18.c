#include <stdio.h>
int main() 
{
    int a,b,c;
    
    printf("Enter the first number : ");
    scanf("%d",&a);
    
    printf("Enter the second number : ");
    scanf("%d",&b);
    
    printf("Enter the third number : ");
    scanf("%d",&c);
    
    
    int greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The greatest number is : %d\n", greatest);
    
    return 0;
}
