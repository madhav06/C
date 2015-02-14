#include<stdio.h>
#define FIRST 360
#define SECOND 240
main()
{
int n, m, i, j;
int roll_number, marks, total;
printf("Enter the number of students and subjects\n");
scanf("%d%d",&n,&m);
printf("\n");
for(i = 1; i <= n; ++i)
    {
    printf("Enter roll_number : ");
    scanf("%d", &roll_number);
    total = 0;
    printf("\nEnter marks of %d subjects for ROLL NO. %d\n",m,roll_number);
    for (j = 1; j <= m; j++)
        {
        scanf("%d",&marks);
        total = total + marks;
        }
        printf("TOTAL MARKS = %d", total);
        if (total >= FIRST)
            printf("(First division)\n\n");
        else if(total >= SECOND)
            printf("(Second division)\n\n");
        else
            printf("(*** FAIL ***)\n\n");
        }
    }
