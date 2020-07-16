#include<stdio.h>
#include<string.h>
int main()
{
    int t,k,i,len1;
    scanf("%d",&t);
    char n[100],a[100]={'0'};    
    for(k=1;k<=t;k++)
    {
        scanf("%s",n);
        len1=strlen(n);
        for(i=0;i<len1;i++)
        {
            if(n[i]=='4')
            {
                a[i]='1';
                n[i]='3';
            }
            else
                a[i]='0';
        }
        printf("Case #%d: %s %s\n",k,n,a);
    }
    return 0;
}
