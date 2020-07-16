#include<stdio.h>
void main()
{
 int t,x,y=0,cas=1,flag,f;
 long long int n,temp,rem;
 scanf("%i",&t);
 while(t>0)
 {
     y=0;
     flag=0;
     scanf("%i",&n);
     x=n/2;
     for(;(x>0)&&(y<n);x=x/2)
     { 
         flag=0;
         y=y+x;
         if(f==1)
         {
             y++;
         }
         temp=x;
         f=0;
         while(temp>0)
         {
             rem=temp%10;
             if(rem==4)
             {   if(x%2==1)
                 f=1;
                 flag=1;
                 break;
             }
             temp=temp/10;
         }
         temp=y;
         while((temp>0)&&(flag==0))
         {
            rem=temp%10;
             if(rem==4)
             {
                flag=1;
             } 
             temp=temp/10;
         }
         if(flag==1)
          continue;
         printf("Case #%i: %i %i\n",cas,x,y);
         break;
         
     }
 
  t--;
  cas++;
 }
    
}