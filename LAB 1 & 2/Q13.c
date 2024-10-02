#include <stdio.h>
int main(){
    
    int number;
    
    printf("Enter a number to check if it is an even or odd number : ");
    scanf("%d",&number);
    
    if (number%2==0)
    {
        printf("It is an even number");
    }
    else
    {
        printf("It is an odd number");
    }
    return 0;
}
