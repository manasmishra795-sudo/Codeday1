#include<stdio.h>
#include<string.h>
typedef enum {RED,YELLOW,GREEN}sign;
int main()
{
    char signs[10];
    int check;
    printf("Enter either RED,YELLOW OR GREEEN\n");
    fgets(signs,sizeof(signs),stdin);
    signs[strcspn(signs, "\n")] ='\0';
    if(strcmp(signs, "RED")==0)
    {
        check=RED;
    }
    else if(strcmp(signs, "YELLOW")==0)
    {
        check=YELLOW;
    }
    else if(strcmp(signs, "GREEN")==0)
    {
        check=GREEN;
    }



    switch(check)
    {
    case RED:
    printf("STOP!\n");
    break;
    case YELLOW:
    printf("WAIT\n");
    break;
    case GREEN:
    printf("GO");
    break;
    default:
    printf("Invalid input.\n");
    break;
    }
    
    return 0;
}