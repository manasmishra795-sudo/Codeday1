#include<stdio.h>
#include<string.h>
void revstring(char string[])
{
    int i,k,store;
    int length=strlen(string);
    for(i=0,k=length-1;i<k;i++,k--)
    {
        store=string[i];
        string[i]=string[k];
        string[k]=store;
    }
}
int main()
{
    char string[101],store[100];
    int i,length;
    printf("Enter the word:\n");
    scanf("%s",&string);
    length=strlen(string);
    for(i=0;i<length;i++)
    {
        store[i]=string[i];
    }
    revstring(string);
    if(strcmp(store,string)==0)
    {
        printf("The word is a palindrome.");
    }
    else
    {
        printf("The word is not a palindrome.");
    }
    
    return 0;
}