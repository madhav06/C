#include<stdio.h>
main()
{
float temp_c,temp_f;
printf("Enter the value of temperature in celsius:\n");
scanf("%f",temp_c);
temp_f = (1.8*temp_c) +32;
printf("the value of temperature in fahernheit is %f",temp_f);
}

