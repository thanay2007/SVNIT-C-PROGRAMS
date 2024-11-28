#include <stdio.h>
int main()
{
    int N, n;
    printf("enter n");
    scanf("%d\n", &n);
    printf("ENTER ARRAY NUMBERS");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    printf("\n");
    printf("enter how many rounds to shift\n");
    scanf("%d", &N);
    printf("ROTATED\n");
    N = N % n;
    for (int i = n - N; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    for (int i = 0; i < n - N; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    printf("\n");
}
