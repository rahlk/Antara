#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
int main()
{   
    int t,a=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
       scanf("%d",&n);
       fflush(stdin);
       char arr[40];
       char brr[40];
       gets(arr);
       for(i=0;arr[i]!='\0';i++)
       {
           if(arr[i]=='E')
           brr[i]='S';
           else
           brr[i]='E';
       }
       brr[i]='\0';
       printf("CASE #%d ",++a);
       for(i=0;brr[i]!='\0';i++)
       printf("%c",brr[i]);
    }
    return 0;
}