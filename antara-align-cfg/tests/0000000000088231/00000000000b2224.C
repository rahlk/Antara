#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
    long int t,len,i,j;
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
      
        printf("Case #%ld: %s %s\n",j,a,b);
        j++;
    }
    return 0;
}