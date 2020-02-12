#include<stdio.h>

int main()
{
    float r, a ,c;
    printf("enter radius :\n");
    scanf("%f", &r);
    a = 3.14*r*r;
    c = 2*3.14*r;
    printf("Area = %f\n",a);
	printf("circumference = %f\n",c);
    return 0;
}