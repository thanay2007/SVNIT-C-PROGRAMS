#include <stdio.h>
int main()
{
    int a[100],n,i,s,count=0;
    printf("Enter number of elements in array - ");
    scanf("%d",&n);
    printf("Enter %d integers \n",n);
    
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter no. to search - ");
    scanf("%d",&s);
 
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            count=count+1;
        }
    }

    printf("%d",count);
    return 0;
}
