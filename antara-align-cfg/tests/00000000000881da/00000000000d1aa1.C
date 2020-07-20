#include<stdio.h>
#include<string.h>


void main()
{
    char a[10000],b[10000];
    int k=0,n,i=0,j=0,m;
    printf("\nEnter no of test cases:");

    scanf("%d",&n);
    while(k<n)
   {
       printf("\nEnter n:");
       scanf("%d",&j);
       printf("\nENter string:");
       scanf("%s",a);
       for(i=0;i<strlen(a);i++)
       {
           if(a[i]=='S')
            b[i]='E';
           else
            b[i]='S';
       }
       b[i]='\0';
       printf("%s",b);
       k++;
   }


    
}
