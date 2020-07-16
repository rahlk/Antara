#include<stdio.h>
int main()
{
   int t,t1=1;
   scanf("%d",&t);
   while(t--)
   {
     int n,i=0;
     scanf("%d",&n);
     char str[2*n-2],str1[2*n-2];
     for(i=0;i<(2*n-2);i++)
     {
      scanf("%c",str[i]);
         if(str[i]=='S')
          str1[i]='E';
         else str1[i]='S';
     }
     printf("Case #%d: %s",t1,str1);
     t1++;
   }
   return 0;
}