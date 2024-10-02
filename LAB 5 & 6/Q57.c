#include <stdio.h>
int main()
{

    int n,MAX,SEC_MAX;
    int a[10];

    for (int i = 0; i<10 ; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d",&n);
        a[i]=n;

        MAX = a[0];
        SEC_MAX = a[0];
    }

    for (int i = 1; i<10 ;i++)
    {
        if(a[i]>MAX)
        {
            SEC_MAX = MAX;
            MAX = a[i];
        }
        else if (a[i]<MAX && a[i]>SEC_MAX)
        {
            SEC_MAX = a[i];
        }
    }
    printf("\n The largest number in the array is %d",MAX);
    printf("\n The second largest number in the array is %d",SEC_MAX);
}
