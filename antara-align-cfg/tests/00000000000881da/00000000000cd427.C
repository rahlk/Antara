#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        char *str;
        scanf("%s",str);
        printf("Case #%d: ",i+1);
        //char *ans=(char *)malloc(strlen(str)*sizeof(char));
        for(int j=0;j<strlen(str);j++)
        {
            if(str[j]=="E")
                printf("S");
            else if(str[j]=="S")
                printf("E");
        }
        printf("\n");
        
    }
    return 0;
}