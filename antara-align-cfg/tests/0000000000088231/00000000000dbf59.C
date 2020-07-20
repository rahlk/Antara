#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c[102];
    int t,i=1,j;
    scanf("%d",&t);
    while(i<=t)
    {
        char b[102]={'0'};
        scanf("%s",c);
        for( j=0;c[j]!='\0';j++)
        {
            b[j]='0';
            if(c[j]=='4')
            {
                c[j]='3';
                b[j]='1';
            }
            
        }
        printf("Case #%d: ",i);
        printf("%s",c);
        printf(" ");
        for(j=0;b[j]=='0';j++)
        {
            
        }
        for(;c[j]!='\0';j++)
        {
            printf("%c",b[j]);
        }
        printf("\n");
        i++;
    }
}