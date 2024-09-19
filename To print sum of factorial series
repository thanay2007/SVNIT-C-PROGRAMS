#include <stdio.h>
int main(){

   float total,factorial,N;
   int i,j;
   factorial = 1;

   printf("Enter how long you want the series to be: ");
   scanf("%f",&N);
   total = 0;

   for (i = 1;i<=N;++i){
       for (j = 1;j<=i;++j){
           factorial*=j;
       }
    total+=i/factorial;
    factorial = 1;
   }
   printf("The total sum of the entire series is %f",total);
    
}
