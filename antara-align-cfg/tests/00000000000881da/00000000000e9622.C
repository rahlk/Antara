#include<stdio.h>
int main()
{
 int T,i,j;
 scanf("%d",&T);
 for(i=1;i<=T;i++){
     int N,p;
     scanf("%d",&N);
     p=(2*N)-2;
     char r,a[p];
     scanf("%c",&r);
     //getchar();
     for(j=0;j<p;j++){
         scanf("%c",&r);
         a[j]=r;
         //printf("%c",r);
     }
     printf("Case #%d: ",i);
     for(j=0;j<p;j++){
     	if(a[j]=='E')
         	printf("S");
         else
         	printf("E");
     }
     
     getchar();
     printf("\n");
     }
     }