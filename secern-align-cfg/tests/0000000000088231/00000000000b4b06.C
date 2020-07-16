#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
    long int t,len,i,j,k,m;
    char *n,*a,*b;
    scanf("%ld",&t);
    j=1;
    while(j<=t)
    {
        n= malloc(sizeof(char)*1000000001);
        a= malloc(sizeof(char)*1000000001);
        b= malloc(sizeof(char)*1000000001);
        scanf("%s",n);
        len = strlen(n);
        for(i=len-1;i>=0;i--)
        {
            if(n[i]=='5')
                {
                    a[i]=(char)(n[i]-2);
                    b[i]='2';
                }
            else if(n[i]=='0')
                {
                    a[i]='9';
                    b[i]='1';
                }
            else
                {
                    a[i]=(char)(n[i]-1);
                    b[i]='1';
                }
        }
        a[len]='\0';
        b[len]='\0';
        for(i=0;a[i]!='\0';i++)
        {
            while(a[i]<'1')
            {
                i++;
                k=i;
            }
           if(a[i]>0)
                break;
        }
        printf("Case #%ld: ",j);
        for(i=k;a[i]!='\0';i++)
        {
            printf("%c",a[i]);
        }
        printf(" ");
        len =strlen(a);
        for(i=len-1;i>=0;i--)
        {
            m=i-1;
            if(a[i]=='9')
            {
                b[m]=b[m]-1;
            }
        }
        for(i=0;b[i]!='\0';i++)
        {
            while(b[i]<'1')
            {
                i++;
                k=i;
            }
           if(b[i]>0)
                break;
        }
        for(i=k;b[i]!='\0';i++)
        {
            printf("%c",b[i]);
        }
        printf("\n");
        j++;
    }
    return 0;
}