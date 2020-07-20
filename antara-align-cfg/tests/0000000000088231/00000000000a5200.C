#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,a,digits=0,count4=0;
        scanf("%d",&n);
        a=n;
       while(a!=0)
       {
            a=a/10;
            digits++;
       }

       int array[digits];
        a=n;
        int arrcount=0;
 while(a!=0)
       {
           if(a%10==4)
           {
               array[arrcount]=1;

           }
           else
           {
              array[arrcount]=0;
           }
           arrcount++;
            a=a/10;

       }
       int num=0;
       for(int k=digits-1;k>=0;k--)
       {
         num = 10 * num + array[k];
       }
       printf("%d %d\n",num,n-num);
    }
}
