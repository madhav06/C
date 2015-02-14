#include<stdio.h>
#include<ctype.h>
main()
{
char character;
printf("Press any key\n");
character = getchar();
if (isalpha(character) > 0)
    printf("The character is a letter.");
else
    if(isdigit(character) > 0)
    printf("The character is not alphanumeric.");
    }
