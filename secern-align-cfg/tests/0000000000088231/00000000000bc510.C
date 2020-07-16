#include<stdio.h>
#include<string.h>
int main()
{  int t,i1;
long long unsigned int i;
   char a[100000],b[1000000];
   scanf("%d",&t);
   for(i1=0;i1<t;i1++)
   {
       scanf("%s",a);i=0;
       while(a[i]!='\0')
       {
           if(a[i]=='4')
           {
               a[i]='2';
               b[i]='2';
           }
           else
           b[i]='0';
           i++;
       }
       printf("Case #%d: %s %s\n",i1,a,b);
   }
    
}