#include <stdio.h>
int main(){

    int i,N;
    printf("Enter a number to check the factors of it: ");
    scanf("%d",&N);

    printf("The factors of %d is:1",N);
    for(i=2;i<N;i++){
        if(N%i==0){
            printf(",%d",i);
        }
    }
   
}
