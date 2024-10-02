#include <stdio.h>
int main(){

    int n,count_pos,count_neg,count_0;
    int a[10];

    for (int i = 0; i<10 ; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d",&n);
        a[i]=n;
    }
    for (int i = 0; i<10 ;i++)
    {
        if (a[i]<0)
        {
            count_neg+=1;
        }else if(a[i]>0)
        {
            count_pos+=1;
        }
        else if(a[i]==0)
        {
            count_0+=1;
        }
    }
    printf("\nTotal number of postive number: %d",count_pos);
    printf("\nTotal number of negative number: %d",count_neg);
    printf("\nTotal number of negative number: %d",count_0);

}
