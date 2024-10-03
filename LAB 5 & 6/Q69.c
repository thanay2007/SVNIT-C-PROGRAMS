#include <stdio.h>
int main()
{
    int a[100],n,i,s;
    printf("Enter number of elements in array - ");
    scanf("%d",&n);
    printf("Enter %d integers \n",n);
  
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
        printf("Enter no. to search - ");
        scanf("%d",&s);
  
        for(i=0;i<n;i++)
        {
            if(a[i]==s)
            {
                printf("%d is present at loc %d \n",s,i+1);
                break;
            }
        }
    }

    if (i==n)
    {
        printf("%d not present in array\n",s);
        return 0;
    }
}
