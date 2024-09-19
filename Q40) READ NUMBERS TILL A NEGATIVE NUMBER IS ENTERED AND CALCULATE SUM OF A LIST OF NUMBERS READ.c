#include <stdio.h>
int main(){

    int N,sum;
    sum = 0 ;

    printf("Enter a number: ");
    scanf("%d",&N);

    while (N>=0){
        sum+=N;
        printf("Enter a number: ");
        scanf("%d",&N);
    }
    printf("As you have entered a negative number the sum of all the numbers except the last negative number: %d",sum);

}
