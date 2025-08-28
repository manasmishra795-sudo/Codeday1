#include<stdio.h>
int main()
{
    char chs;
    printf("Enter the character:");
    scanf("%c", &chs);
    if(chs >= 'A' && chs<= 'Z')
    {
        printf("The character is in UPPERCASE");
    }
    else if( chs>='a'&& chs<='z')
    {
        printf("The character is in LOWERCASE");
    }
    else if ( chs>='0' && chs <='9')
    {
        printf("The character is a digit");
    }
    else {
        printf("The character is a special character ");
    }
    return 0;
}