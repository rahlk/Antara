#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
    int e,p,k,j;
    char str[10000];
    scanf("%d",&e);
    for(j=1;j<=e;j++)
    {
        scanf("%d",&p);
        scanf("%s",&str);
        int l;
        l=strlen(str);
        printf("Case #%d: ",j);
        for(k=0;k<l;k++)
        {
            if(str[k]=='S')
              printf("E");
              else
              printf("S");
        }
        printf("\n");
    }
}
