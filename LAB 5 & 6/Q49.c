#include <stdio.h>

int main() {

    int n,i,j,k,leading_space;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &n);

    leading_space = n - 1;
   
    for (i = 1; i <= n; ++i) {
        printf("\n");

        for (j = leading_space; j > 0; j--) {
            printf(" ");
        }

        for (k = 1; k <= i; k++) {
            printf("* ");
        }

        leading_space--;
    }
    return 0;
}
