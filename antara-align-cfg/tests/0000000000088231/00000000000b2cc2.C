#include<stdio.h>
void main()
{
    int t,i,j,d1,d2,input[100],arr[100],count;
    scanf("%d",&t);
    for(i=0;i<t;i++)
       scanf("%d",&input[i]);
    for(j=0;j<t;j++)
       {
           count=100;
           d1=0; d2=0;
           while(input[j]>0)
              {
                  arr[--count]=input[j]%10;
                  input[j]=input[j]/10;
              }
            for(i=count;i<100;i++)
            {
                d2=d2*10;
               if(arr[i]==4)
                   {
                       arr[i]--;
                       d2=d2+1;
                   }

                   d1=d1*10+arr[i];
            }
            printf("\nCase #%d: %d %d",j+1,d1,d2);

       }

}

