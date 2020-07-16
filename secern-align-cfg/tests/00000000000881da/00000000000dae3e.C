#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
   long long int t,l,i,j,k=0;
   scanf("%lld",&t);
   
   while(t--)
   {
       k++;
       long long int count1=0,count2=0,count3=0,count4=0;
       scanf("%lld",&l);
       char str[2*l-2];
       scanf("%s",str);
      printf("Case #%d: ",k);
        for(i=0;i<2*l-2;i++)
        {
            if(str[i]=='S')
             printf("E");
            else
             printf("S");
        }
        printf("\n");
   }
}
