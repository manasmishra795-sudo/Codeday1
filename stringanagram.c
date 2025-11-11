#include<stdio.h>
#include<string.h>
void lowercase(char string[100],int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(string[i]>='A'&& string[i]<='Z')
        {
            string[i]=string[i]+32;
        }
    }
}
void sort(char string[100],int length)
{
   int i,k;
   char store;
   for(i=0;i<length-1;i++)
 {
    for(k=i+1;k<length;k++)
     {
        if(string[k]<string[i])
        {
            store=string[i];
            string[i]=string[k];
            string[k]=store;
        }
     }
 }
}
int anagram(char string1[100],char string2[100],int length1,int length2)
{
    int i;
    if(length1!=length2)
    {
        return -1;
    }
    else
    {
        for(i=0;i<length1;i++)
        {
            if(string1[i]!=string2[i])
            {
                return -1;
            }

        }
    }
    return 1;
}
int main()
{
    char word1[100],word2[100];
    int length1,length2,check=0;
    printf("Enter the 1st word:\n");
    scanf("%s",word1);
    printf("Enter the 2nd word:\n");
    scanf("%s",word2);
    length1=strlen(word1);
    length2=strlen(word2);
    printf("%s\n",word1);
    printf("%s\n",word2);
    lowercase(word1,length1);
    lowercase(word2,length2);
    sort(word1,length1);
    sort(word2,length2);
    check=anagram(word1,word2,length1,length2);
    if(check==-1)
    {
        printf("The words are not anagrams.\n");
    }
    else if(check==1)
    {
        printf("The words are an anagram.\n");
    }
    return 0;
}