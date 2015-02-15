#include<stdio.h>
main()
{
char string1[20],string2[20];
int i;
printf("Enter a string\n");
printf("?");
scanf("%s",string2);
for(i=0;string2[i] != '\0';i++)
    string1[i] = string2[i];
    string1[i] = '\0';
    printf("\n");
    printf("%s\n",string1);
    printf("Number of character = %d\n",i);
}

