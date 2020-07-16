#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int y,x;
   scanf("%d%d",&y,&x);
   int ar[y][x];
   int i,j;
   for(i=1;i<=y;i++)
   {
       for(j=1;j<=x;j++)
       {
           scanf("%d",&ar[y][x]);
       }
   }
   for(i=1;i<y;i++)
   {
       for(j=1;j<x;j++)
       {
           if(ar[i][j]==1)
           printf("%d->",j);
       }
       printf("\n");
   }
   return 0;
   
}
