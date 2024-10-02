#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("Enter length of side 1 : ");
    scanf("%f",&a);
    printf("Enter length of side 2 : ");
    scanf("%f",&b);
    printf("Enter length of side 3 : ");
    scanf("%f",&c);
    
    float s;
    s = (a+b+c)/2;
    printf("Semi perimeter of triangle : %f",s);
    printf("\n");
    
    float q,area;
    q = s*(s-a)*(s-b)*(s-c);
    area = pow(q,0.5);
    printf("Area of triangle : %f",area);
    return 0;
}
