#include<stdio.h>
#include<string.h>
typedef long long int ll;
int main()
{
    char s[100],a[100],b[100];
    int t,i,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
       int k=0;
        scanf("%s",&s);
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='4')
            {
                a[j]='3';
                b[j]='1';
            }
            else
            {
                a[j]=s[j];
                b[j]='0';
            }
        }
        /*
        //printf("Case #%d: ",i+1);
        for(;j<strlen(s);j++)
        {
            if(s[j]=='4')
            {
                a[j]='3';
                b[j]='1';
                //printf("%d",3)
            }
            else
            {
                a[j]=''
            }
            //printf("%d",0);
        }*/
        printf("Case #%d: ",i+1);
        for(j=0;j<strlen(s);j++)
        {
            printf("%c",a[j]);
        }
        printf(" ");
        //puts(b);
        for(j=0;j<strlen(s);j++)
        {
            if(b[j]=='0'&&k==0)
            {
                //printf("%c",b[j]);
                continue;
            }
            else
            {
                printf("%c",b[j]);
                k++;
            }
        }
        printf("\n");
    }
    
}