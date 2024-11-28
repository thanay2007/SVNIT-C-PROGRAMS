#include <stdio.h>

int main()
{
    int n, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, countf = 0;
    printf("HOW MANY VOTERS ARE THERE?");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER ARRAY NUMBERS");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nVOTES ARE\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count1 += 1;
        }
        else if (arr[i] == 2)
        {
            count2 += 1;
        }
        else if (arr[i] == 3)
        {
            count3 += 1;
        }
        else if (arr[i] == 4)
        {
            count4 += 1;
        }
        else if (arr[i] == 5)
        {
            count5 += 1;
        }
        else
            countf += 1;
    }
    printf("\n CANDITATE 1 GOT : %d votes in election ", count1);
    printf("\n CANDITATE 2 GOT : %d votes in election ", count3);
    printf("\n CANDITATE 3 GOT : %d votes in election ", count3);
    printf("\n CANDITATE 4 GOT : %d votes in election ", count4);
    printf("\n CANDITATE 5 GOT : %d votes in election ", count5);
    printf("\n SPOILT BALLOT GOT : %d votes in election ", countf);
}
