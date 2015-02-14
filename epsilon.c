#include<stdio.h>
#include<string.h>
struct class
{
    int number;
    char name[10];
    float marks;
};
main()
{
    int x;
    struct class sstudent1 = {110, "Raghav",72.50};
    struct class student2 = {225, "Nikhil",67.00};
    struct class student3;
    student3 = student2;
    x = ((student3.number == student2.number) && (student3.marks == student2.marks)) ? 1 : 0;
    if(x==1)
    {
        printf("\n student3 and student2 are same\n\n");
        printf("%d\n",student2.number);
        printf("%s\n",student2.name);
        printf("%f\n",student2.marks);
    }
    else
        printf("\nstudent3 and student2 are different\n\n");
}
