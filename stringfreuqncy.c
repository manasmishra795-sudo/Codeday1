#include<stdio.h>
#include<string.h>
int main()
{
    char string[100],letter;
    int i,length,cchar=0;
    printf("Enter the length of the word:\n");
    scanf("%d",&length);
    getchar();
    if(length<=0 ||length>100)
    {
        printf("Invalid value.");
        return 0;
    }
    printf("Enter the word:\n");
    for(i=0;i<length;i++)
    {
        scanf(" %c",&string[i]);
    }
    string[length]='\0';
    printf("Enter the character whose frequncy you want to search:\n");
    scanf(" %c",&letter);
    for(i=0;i<length;i++)
    {
        if(string[i]==letter)
        {
            cchar++;
        }
    }
    printf("The frequence of the character '%c' in the string: %s is %d",letter,string,cchar);
    return 0;
}    