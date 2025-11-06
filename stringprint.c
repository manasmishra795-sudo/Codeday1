#include<stdio.h>
int main ()
{
    char string[100],length=0,i;
    printf("Enter the string:\n");
    scanf("%s",&string);
    while(string[length]!='\0')
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        printf("%c",string[i]);
        printf("\n");
    }
    
    return 0;
}