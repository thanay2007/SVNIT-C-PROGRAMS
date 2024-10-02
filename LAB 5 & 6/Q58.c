#include <stdio.h>
int main(){

    int A[3],B[3],C[3];

    for (int i = 0; i<3;i++)
    {
        printf(" \nEnter a number for the array A:" );
        scanf("%d",&A[i]);
        printf(" \nEnter a number for the array B:" );
        scanf("%d",&B[i]);
        C[i]= A[i]+B[i];
    }

    for (int j = 0; j<3;j++)
    {
        printf("%d \t",C[j]);
    }
    
}
