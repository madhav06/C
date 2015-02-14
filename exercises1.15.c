#include<stdio.h>
int main()
{
char operator;
float num1,num2;
printf("Enter operator either + or - or * or / :");
scanf("%c",&operator);
printf("Enter two operands : ");
scanf("%f%f",&num1,&num2);
switch(operator)
    {
    case '+':
        printf("num1+num2 = %.2f\n",num1+num2);
        break;
    case '-':
        printf("num1-num2 = %.2f\n",num1-num2);
        break;
    case '*':
        printf("num1*num2 = %.2f\n",num1*num2);
        break;
    case '/':
        printf("num1/num2 = %.2f",num1/num2);
        }
}

