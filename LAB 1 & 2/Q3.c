#include<stdio.h>
int main()
{
    int s,h,b;
    
    printf("Enter your salary : ₹");
    scanf("%d",&s);
    
    printf("Enter your house allowance : ₹");
    scanf("%d",&h);
    
    printf("Enter your bonus : ₹");
    scanf("%d",&b);
    
    int gross;
    gross = s+h+b;
    printf("Your gross income is : ₹%d",gross);
    
    return 0;
}
