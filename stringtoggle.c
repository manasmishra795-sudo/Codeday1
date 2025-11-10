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
        scanf(" %c", &string[i]);
    }
    string[length]='\0';
    printf("Word:%s\n",string);
    for(i=0;i<length;i++)
    {
        if(string[i]>='A'&& string[i]<='Z')
        {
            string[i]=string[i]+32;
        }
        else if(string[i]>='a'&& string[i]<='z')
        {
            string[i]=string[i]-32;
        }
    }
    printf("Toggled Word:%s",string);
    return 0;
}    