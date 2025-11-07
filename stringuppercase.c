#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int length,i;
    printf("Enter a word:\n");
    scanf("%s",&string);
    length=strlen(string);
    printf("Word before:%s\n",string);
    for(i=0;i<length;i++)
    {
        if(string[i]>='a'&& string[i]<='z')
        {
            string[i]=string[i]-32;
        }
    }
    printf("Word after:%s",string);
    return 0;
}