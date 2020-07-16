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
       for(i=0;a[i]!='\0';i++)
       {
           if(a[i]==52)
           {
               a[i]='3';
               b[i]='1';
           }
           else
           b[i]='0';
           i++;
       }
       printf("Case #%d: %s %s\n",(i1+1),a,b);
   }
    
}