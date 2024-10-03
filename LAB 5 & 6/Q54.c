#include <stdio.h>
int main() 
{
    int arr[10], sum = 0;

    for (int i = 0; i < 10; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
  
    printf("Sum of the numbers: %d\n", sum);
    return 0;
}
