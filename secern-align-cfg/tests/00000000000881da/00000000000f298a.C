#include<stdio.h>

int main()
{
  int T,j,i;
  scanf("%d",&T);
   for(j=1;j<T+1;j++)
 {
   int N ;
   scanf("%d",&N) ;
   
   char P[2*N-1] ;
   scanf("%s",P) ;
   
   for(i=0;i<2*N-2;i++)
 {
    if( P[i]=='E')
    P[i]='S';
    
    else
    P[i]='E';
    
  }
  printf(" case #%d: %s\n",j,P);
  
 }
 return 0;
 }
  