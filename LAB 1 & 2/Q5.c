#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    c = a;
    a = b;
    b = c;
    
    printf("Now value of a : %d\n",a);
    printf("Now value of a : %d",b);
    
    return 0;
}
