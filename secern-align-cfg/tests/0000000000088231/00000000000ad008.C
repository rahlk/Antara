#include<stdio.h>
int main()
{
   int t,i;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
      float f=10;
      float x;
      scanf("%f",&x);
      float sum=0;
      for(j=0;j<100;j++)
      {
         if(x%f!=x)
         {
            if((x%f)==(.4*f))
            {
               sum+=(x%f)/2;
               f=f*f;
            }
            else
            {
               break;
            }
         }
      }
      int y=x-sum;
      printf("%f %f\n",sum,y);
   }
}