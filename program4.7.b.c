#include<stdio.h>
main()
{
char address[80];
printf("Enter address\n");
scanf("%[^\n]",address);
printf("%-80s",address);
}

