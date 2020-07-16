#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char  a[1000],b[10000],ch;
    int i,j,n,t,l;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
        scanf("%c",&ch);
        scanf("%[^\n]s",a);
        n=strlen(a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='4')
            {
                a[i]='3';
                b[i]='1';
            }
            else
            {
                b[i]='0';
            }
        }
        printf("Case #%d: ",l);
        for(i=0;i<n;i++)
        {
            printf("%c",a[i]);
        }
        printf(" ");
        i=0;
        while(i!=n)
        {
            if(b[i]=='1')
            {
                j=i;
                break;
            }
            i++;
        }
        for(i=j;i<n;i++)
        {
            printf("%c",b[i]);
        }
        printf("\n");
    }
}