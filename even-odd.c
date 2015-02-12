#include<stdio.h>
main()
{
int test = 1;
int number;
printf("Input a number\n");
scanf("%d",&number);
while(number!=-1)
    {
    if(number & test)
        printf("Number is odd\n\n");
        else
            printf("Number is even\n\n");
        printf("Input a number \n");
        scanf("%d",&number);
    }
    }
