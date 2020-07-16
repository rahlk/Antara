#include<stdio.h>
#include<string.h>
int main()
{
    int t,k,i,len1,dim;
    scanf("%d",&t);
    char n[10000];    
    for(k=1;k<=t;k++)
    {
        scanf("%d",&dim);
        scanf("%s",n);
        len1=strlen(n);
        for(i=0;i<len1;i++)
        {
            if(n[i]=='E')
                n[i]='S';
            else if(n[i]=='S')
                n[i]='E';
        }
        printf("Case #%d: %s\n",k,n);
    }
    return 0;
}
