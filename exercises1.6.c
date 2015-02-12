#include<stdio.h>
int main()
{
int num,i = 1;
printf("Enter a number \n");
scanf("%d",&num);
printf("Multiplication table of %d\n",num);
{
while(i<=10)
    printf("\n %d*%d = %d",num,i,num*i);
    i++;
}
return 0;
}
