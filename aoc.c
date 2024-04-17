#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter radius of circle\n");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle is %f",a);
    return 0;
}