#include <stdio.h>
int main()
{
    int ts;
    printf("Time given in total seconds : ");
    scanf("%d",&ts);
    
    int h,q,m,s;
    s = ts%60;
    q = ts/60;
    m = q%60;
    h = ts/3600;
    printf("Time in HH:MM:SS format : \n");
    printf("%d",h);
    printf(":");
    printf("%d",m);
    printf(":");
    printf("%d",s);

    return 0;
}
