#include<stdio.h>
#include<string.h>
int main()
{
    char string[100],store;
    int i,length,counter=0,k;
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
    for(i=0;i<length-1 && !counter;i++)
{
        if(string[i]>='a' && string[i]<='z')
    {
            for(k=i+1;k<length;k++)
        {
            if(string[k]==string[i])
            {    
            store=string[i];
            counter=1;
            break;
            }

        }
    }
}
    printf("Word:%s\n",string);
    if(counter!=0)
    {
    printf("The first repeating lowercase letter is:'%c'\n",store);
    }
    else
    {
        printf("There are no repeating characters in the word.");
    }
    return 0;
}