#include<stdio.h>
#define PI 3.14
void main()
{
float area,r,circum;
printf("Enter the value of radius r :");
scanf("%f\n",&r);
area = PI*r*r;
circum = 2*PI*r;
printf("area of the circle is : %f\n",&area);
printf("circum of the circle is : %f\n",&circum);
}

