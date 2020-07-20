#include<stdio.h>
int main()
{
   int a,i,temp,r,s,t,k,b,c;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%d",&a);
       temp=a;
        k=1;
        c=a;
       while(temp!=0)
       {
           r=temp%10;

           if(r==4)
            {
                c=c-k;
            }

           temp=temp/10;
           k=k*10;

       }

       b=a-c;
       printf("Case #%d: %d %d\n",i,b,c);

   }


}
