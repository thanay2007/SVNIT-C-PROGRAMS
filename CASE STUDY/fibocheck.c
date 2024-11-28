#include <stdio.h>

int fibonacci(int n);
int main() 
{
    int N;
    printf("Enter the number : ");
    scanf("%d", &N);
    for (int i = 1; 1; i++)
    {
        if (fibonacci(i) <= N)
        {
            if (fibonacci(i) == N)
            {
                printf("IsFibo");
                break;
            }
        }
        else
        {
            printf("IsNotFibo");
            break;
        }
    }
    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
