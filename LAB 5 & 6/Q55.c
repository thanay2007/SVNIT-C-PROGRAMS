#include <stdio.h>
int main(){

    int n,count_o,count_e;
    int a[10];

    for (int i = 0; i<10 ; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d",&n);
        a[i]=n;
    }

    for (int i = 0; i<10 ;i++)
    {
        if (a[i]%2!=0)
        {
            count_o+=1;
        }
        count_e = 10-count_o;
    }
    printf("\nTotal number of odd number: %d",count_o);
    printf("\nTotal number of even number: %d",count_e);
}
