#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
   long long int t,l,i,j,k;
   scanf("%lld",&t);
   
   while(t--)
   {
       long long int count1=0,count2=0,count3=0,count4=0;
       scanf("%lld",&l);
       char str[2*l-2];
       scanf("%s",str);
        
       int prev=0,c=0;
       
       for(i=0;i<2*l-2;i++)
       {
           if(str[i]!=str[i+1])
           {
               for(j=i+1;j>=prev;j--)
                {
                    printf("%c",str[j]);
                }
                prev=i+2;
                i=i+1;
           }
          
       }
       printf("\n");
   }
}
