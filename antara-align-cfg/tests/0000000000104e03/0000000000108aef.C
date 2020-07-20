#include<stdio.h>
int main()
{
 int t,r,c,i,j,k,x,a[r][c],l;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
     scanf("%d %d",&r,&c);
     for(j=0;j<r;j++)
     {
         for(k=0;k<c;k++)
         {
             scanf("%d",&a[i][j]);
         }
     }
 }
 for(i=1;i<=t;i++)
 {
     if(r==c)
     {
         printf("Case #%d: IMPOSSIBLE",i);
         break;
     }
     else{
         printf("Case #%d: POSSIBLE",i+1);
         x=r*c;
         for(l=1;l<=x;l++)
         {
             for(j=0;j<r;j++)
             {
                 for(k=0;k<c;k++)
                 {
                     if(l==a[j][k])
                     {
                         printf("%d %d",i,j);
                     }
                 }
             }
         }
         break;
     }
 }
}