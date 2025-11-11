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
int checkrotation(char string1[100],char string2[100],int length1,int length2)
{
    int i,k,flag=0;
    char store[2*length1+1];
    if(length1!=length2)
    {
        return -1;
    }
    else
    {
        for(i=0;i<length1;i++)
        {
            store[i]=string1[i];
            store[i+length1]=string1[i];
        }
        store[2*length1+1]='\0';
        for(i=0;i<=length1;i++)
        {
            flag=0;
            for(k=0;k<length1;k++)
            {
                if(store[i+k]!=string2[k])
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                return 1;
            }
        }
    }
    return -1;
}
int main()
{
    char word1[100],word2[100];
    int length1,length2,check=0;
    printf("Enter the 1st string:\n");
    scanf("%s",word1);
    printf("Enter the 2nd string:\n");
    scanf("%s",word2);
    length1=strlen(word1);
    length2=strlen(word2);
    printf("String 1:%s\n",word1);
    printf("String 2:%s\n",word2);
    lowercase(word1,length1);
    lowercase(word2,length2);
    check=checkrotation(word1,word2,length1,length2);
    if(check==1)
    {
        printf("'%s' and '%s' are rotation of each other.\n",word1,word2);
    }
    else if(check==-1)
    {
        printf("'%s' and '%s' are not rotations of each other.\n",word1,word2);
    }
return 0;
}
