#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i,length,cspace=0,ccharacter=0,cdigit=0;
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
        scanf("%c",&string[i]);
    }
    string[length]='\0';
    printf("Word:%s\n",string);
    for(i=0;i<length;i++)
    {
        if(string[i]==' ')
        {
            string[i]='-';
        }
    }
    printf("New Word:%s\n",string);
    return 0;
}