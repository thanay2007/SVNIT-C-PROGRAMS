#include <stdio.h>
int main() 
{
    int a[10], temp;
  
    for (int i = 0; i < 10; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10 / 2; i++) 
    {
        temp = a[i];
        a[i] = a[10 - i - 1];
        a[10 - i - 1] = temp;
    }
  
    printf("Array after reversal: \n");
  
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}
