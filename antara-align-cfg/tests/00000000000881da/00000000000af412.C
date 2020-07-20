#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int size;
        scanf("%d\n",&size);
        char str[2*(size-1)];
        gets(str);
        printf("Case #%d: ",i+1);
        for(int i=0;i<(2*(size-1));i++)
        {
            if(str[i]=='E') printf("S");
            else printf("E");
        }
        printf("\n");
        
    }
}