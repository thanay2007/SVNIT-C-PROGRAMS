#include <stdio.h>

int main() 
{
    int n_elements;
    printf("Enter the number of elements for arrays A and B: ");
    scanf("%d", &n_elements);

    int A[n_elements], B[n_elements], temp;

    for (int i = 0; i < n_elements; i++) 
    {
        printf("Enter a number for array A[%d]: ", i);
        scanf("%d", &A[i]);
        
        printf("Enter a number for array B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int j = 0; j < n_elements; j++) 
    {
        temp = A[j];
        A[j] = B[j];
        B[j] = temp;
    }
  
    printf("Array A after swapping: \n");
  
    for (int k = 0; k < n_elements; k++) 
    {
        printf("%d\t", A[k]);
    }
  
    printf("\n");
    printf("Array B after swapping: \n");
  
    for (int k = 0; k < n_elements; k++) 
    {
        printf("%d\t", B[k]);
    }
  
    return 0;
}
