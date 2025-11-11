#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[1000],word[100],longest[100],ch;
    int i=0,k=0,maxlength=0;
    printf("Enter the sentence:\n");
    fgets(sentence,sizeof(sentence),stdin);
 while(1)
 {
        ch=sentence[i];
        if(ch!=' '&& ch!='\n'&& ch!='\0')
        {
           word[k]=ch;
           k++;
        }
        else
        {
            word[k]='\0';
        
         if(k>maxlength)
         {
            maxlength=k;
            strcpy(longest,word);
         }
        k=0;
        }
    if(ch=='\0')
    {
        break;
    }
    i++;
 }
printf("Longest word in setence:\n%sis:'%s'\n",sentence,longest);
printf("Length of the word:%d",maxlength);
return 0;
}
