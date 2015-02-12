#include<stdio.h>
#define PI 3.14
void main()
{
float r,area;
printf("Enter the value of radius : ");
scanf("%d",&r);
area = PI *r*r;
printf("area of given circle is : %f\n",area);
getch();
}
