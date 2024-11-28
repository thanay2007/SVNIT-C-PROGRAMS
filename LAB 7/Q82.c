#include <stdio.h>

double nCr(double n, double r);
double fact(double num);
int main()
{
    double n, r;
    printf("Enter n & r: ");
    scanf("%lf%lf", &n, &r);

    double result = nCr(n, r);
    printf("combination = %.2lf\n", result);

    return 0;
}
double fact(double num)
{

    double fact = 1;
    
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

double nCr(double n, double r)
{
    double combi;
    combi = fact(n) / (fact(r) * fact(n - r));
    return combi;
}
