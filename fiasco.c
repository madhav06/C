#include<stdio.h>
#include<string.h>
struct book
{
    char title;
    char author;
    int pages;
    int price;
};
main()
{
    struct book book1;
    printf("Input Values\n");
    scanf("%s\n",book1.title);
    scanf("%s\n",book1.author);
    scanf("%d\n",&book1.pages);
    scanf("%d\n",&book1.price);
    printf("%s\n",book1.title);
    printf("%s\n",book1.author);
    printf("%d\n",&book1.pages);
    printf("%d\n",&book1.price);
}
