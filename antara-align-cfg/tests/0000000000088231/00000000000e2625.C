#include<stdio.h>
#include<string.h>
int main()
{
    int t,k,i,len1,j;
    scanf("%d",&t);
    char n[102],a[102]={'0'};    
    for(k=1;k<=t;k++)
    {
        scanf("%s",n);
        len1=strlen(n);
        for(i=0;i<len1;i++)
        {
            if(n[i]=='4')
            {
                a[i]='2';
                n[i]='2';
            }
            else
                a[i]='0';
        }
        printf("Case #%d: %s",k,n);
        for(i=0;i<len1;i++)
        {
            if(a[i]=='2')
            {
                    printf(" %s",a+i);
                break;
            }
        }
        printf("\n");
    }
    return 0;
}