#include <stdio.h>
int main(){

    int N,space;
    printf("Enter a number to decide how long the pattern should be: ");
    scanf("%d",&N);
    space = N;
    for (int i=1;i<=N;++i){
        for (int j=1;j<space;++j){
            printf(" ");
        }for (int k=1;k<=i;++k){
            printf("%d",k);
        }
        printf("\n");
        space = space-1;
    }  
}
