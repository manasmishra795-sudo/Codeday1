#include<stdio.h>
#include<string.h>
int main()
{
   char string[100];
   int length,i,counterv=0,counterc=0;
   printf("Enter the string:\n");
   scanf("%s",&string);
   length=strlen(string);
   for(i=0;i<length;i++)
   {
    if(string[i]=='a'|| string[i]=='e'|| string[i]=='i'|| string[i]=='o'|| string[i]=='u'|| string[i]=='A'|| string[i]=='O'|| string[i]=='I'|| string[i]=='E'|| string[i]=='U')
    {
        counterv++;
    }
    else
    {
        counterc++;
    }
   }
   printf("The  number of vowels and consonants in %s are %d and %d",string,counterv,counterc);
    return 0;
}