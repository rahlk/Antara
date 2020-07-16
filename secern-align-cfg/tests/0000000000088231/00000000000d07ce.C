#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
   int i,ing1,ing2,ct,T;
   scanf("%d",&T);
   while(T--)
   {
       char N[100];
       char N1[100];
       scanf("%s",N);
       int count=0;
       for(i=0;i<strlen(N);i++)
       {
           if(N[i]=='4')
           {
               N[i]='3';
               N1[i]='1';
               if(count==0)
               ct=i;
               count++;
           }
           else
           {
               N1[i]='0';
           }
       }
       printf("Case#%d:%s",ing2++,N);  
       for(ing1=ct;ing1<strlen(N);ing1++)
       {
           printf("%c",N1[ing1]);
       }
       printf("\n");
      
   }
}