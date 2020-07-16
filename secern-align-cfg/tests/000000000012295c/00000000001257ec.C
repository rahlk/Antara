#include <stdio.h>
int main()
{  int t,p,q,x,y,i,j,x1,y1,m,k;
   char d;
   scanf("%d",&t);
   for(k=1;k<=t;k++){
       scanf("%d %d",&p,&q);
       q=q+1;
       int a[q][q];
       for(i=0;i<q;i++){
           for(j=0;j<q;j++){
               a[i][j]=0;
           }
       }
       while(p--){
           scanf("%d %d %c",&x,&y,&d);
           if(d=='N'){
               for(i=0;i<q;i++)
                    a[i][y+1]+=1;
           }
           if(d=='S'){
               for(i=0;i<q;i++)
                    a[i][y-1]+=1;
           }
           if(d=='E'){
               for(i=0;i<q;i++)
                    a[x+1][i]+=1;
           }
           if(d=='W'){
               for(i=0;i<q;i++)
                    a[x-1][i]+=1;
           }
       }
       m=0;
       x1=0;
       y1=0;
       /*for(i=0;i<q;i++){
           for(j=0;j<q;j++)
                printf("%d\t",a[i][j]);
           printf("\n");
       }*/
       for(i=0;i<q;i++){
           for(j=0;j<q;j++){
               if(a[i][j]>m){
                   m=a[i][j];
                   x1=i;
                   y1=j;
               }
           }
       }
       printf("Case #%d: %d %d\n",k,x1,y1);
   }
}