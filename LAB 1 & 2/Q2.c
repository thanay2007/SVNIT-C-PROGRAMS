#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    
    printf("Enter Mathematics marks : ");
    scanf("%d",&m1);
    
    printf("Enter English marks : ");
    scanf("%d",&m2);
    
    printf("Enter Science marks : ");
    scanf("%d",&m3);
    
    printf("Enter Social Science marks : ");
    scanf("%d",&m4);
    
    printf("Enter CS marks : ");
    scanf("%d",&m5);
    
    int total;
    total = m1+m2+m3+m4+m5;
    printf("Total marks : %d",total);
    printf("\n");
    
    float perct;
    perct = total/5;
    printf("Percentage of student : %f",perct);
    return 0;
}
