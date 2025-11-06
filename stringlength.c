#include<stdio.h>
int main ()
{
    char string[100],length=0;
    printf("Enter the string:\n");
    scanf("%s",&string);
    while(string[length]!='\0')
    {
        length++;
    }
    printf("The length of the string: %s is %d",string,length);
    return 0;
}