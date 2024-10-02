#include <stdio.h>
int main() 
{
    int number;
    int i;

    printf("Enter a number to print the multiplication table of the given number of the given number : ");
    scanf("%d",&number);

    i=1;

    while(i<=10)
    {
        printf("%d x %d = %d \n",number,i,number*i);
        i +=1;
    }

    return 0;
}
