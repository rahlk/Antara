#include<stdio.h>
#include<string.h>
int main()
{
    int t,k,i,len1;
    scanf("%d",&t);
    char n[100],a[100]={'0'};    
    for(k=0;k<t;k++)
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
        }
        printf("Case #%d: %s %s\n",k+1,n,a);
    }
    return 0;
}
