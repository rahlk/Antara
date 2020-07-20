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
        char * str;
        gets(str);
        char * ans=(char *)malloc(strlen(str)*sizeof(char));
        for(int j=0;j<strlen(str);i++)
        {
            if(str[j]=="E")
                ans[j]="S";
            else if(str[j]=="S")
                ans[j]="E";
        }
        printf("Case #i: %s \n",i+1,ans);
    }
    return 0;
}