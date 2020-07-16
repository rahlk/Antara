#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        int n;
        scanf("%d",&n);
        char *str;
        str = (char*)malloc(sizeof(char)*1000000);
        scanf("%s",str);
        printf("Case #%d: ",i);
        for(int j=0;j<strlen(str);j++)
        {
           if(str[j]=='E')
           printf("S");
           if(str[j]=='S')
           printf("E");
        }
        printf("\n");
        
    }
}