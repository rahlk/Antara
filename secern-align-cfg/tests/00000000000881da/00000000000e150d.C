#include<stdio.h>
int main()
{
   int t,t1=1;
   scanf("%d",&t);
   while(t--)
   {
     int n,i=0;
     char str[20000],str1[20000];
     scanf("%d",&n);
     scanf("%s",str);
     for(i=0;i<(2*n-2);i++)
     {
         if(str[i]=='S')
          str1[i]='E';
         else str1[i]='S';
     }
     str1[i]='\0';
     printf("Case #%d: %s\n",t1,str1);
     t1++;
   }
   return 0;
}