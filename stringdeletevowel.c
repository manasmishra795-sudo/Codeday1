#include<stdio.h>
#include<string.h>
#include <ctype.h>  

int isVowel(char ch) 
{
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main()
{
    char string[100],store[100];
    int i,length,k=0;
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
    for(i=0;i<length;i++)
    {
        if(!isVowel(string[i]))
        {
            store[k]=string[i];
            k++;
        }
    }
    printf("Word before %s\nWord after %s",string,store);
return 0;
}