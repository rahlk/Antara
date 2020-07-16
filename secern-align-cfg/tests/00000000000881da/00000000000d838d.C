#include<stdio.h>
int main() {
   int t,i,j=1;
   long int n;
   char s[1000001]; 
   scanf("%d",&t);
   while(t--)
   {
     scanf("%ld",&n);
     scanf("%s",s);
     for(i=0;i<2*n-2;i++)
     {
         if(s[i]=='S')
          s[i]='E';
         else if(s[i]=='E')
             s[i]='S';
     }
     printf("Case #%d: %s\n",j,s);
     j+=1;
   }
}