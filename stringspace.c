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
    for(i=0;i<length;i++)
    {
        if(string[i]==32)
        {
            cspace++;
        }
        if(string[i]>=48 && string[i]<=57)
        {
            cdigit++;
        }
        if((string[i]>=33 && string[i]<=47)|| (string[i]>=58 && string[i]<=64)|| (string[i]>=91&&string[i]<=96)|| (string[i]>123 && string[i]<=126))
        {
            ccharacter++;
        }
    }
    printf("The number of\n1Spaces:%d\n2Spseical Characters:%d\n3Digits:%d",cspace,ccharacter,cdigit);
    return 0;
}