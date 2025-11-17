#include<stdio.h>
#include<string.h>
#include<ctype.h>
void rev(char* start,char* end)
{
    char temp;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
         start++;
         end--;
    }
}
int main()
{
    char sentence[1000];
    char* startword=NULL;
    int i;
    printf("Enter the sentence:\n");
    fgets(sentence,sizeof(sentence),stdin);
    printf("Sentence:\n%s\n",sentence);
    sentence[strcspn(sentence,"\n")]='\0';
    for(i=0;;i++)
    {
        if(!isspace(sentence[i])&& sentence[i]!='\0')
        {
            if(startword==NULL)
            {
                startword=&sentence[i];
            }
        }
        else
        {
            if(startword!=NULL)
            {
            rev(startword,&sentence[i-1]);
            startword=NULL;
            }
            if(sentence[i]=='\0')
            {
                break;
            }
        }
    }
    printf("Reversed Sentence:\n%s\n",sentence);
    return 0;
}