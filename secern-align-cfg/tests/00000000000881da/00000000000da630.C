#include<stdio.h>
int main() {
   int t,i,c=1;
   long int n;
   char str[1000001]; 
   scanf("%d",&t);
   while(t--)
   {
     scanf("%ld",&n);
     scanf("%s",str);
     for(i=0;i<2*n-2;i++)
     {
         if(str[i]=='S')
          str[i]='E';
         else if(str[i]=='E')
             str[i]='S';
     }
     printf("Case #%d: %s\n",c++,str);
   }
}