#include <stdlib.h>
#include <stdio.h>
int main()
{
    
  int T,N,Q,i,a,b;
  char *P,*R;
  scanf("%d",&T);
  Q=0;
  while(T--)
  { 
    ++Q;
     scanf("%d",&N);
     a=(2*N)-1;
     P=(char *)malloc(sizeof(char)*(a));
     scanf("%s",P);
     
     R=(char *)malloc(sizeof(char)*(a));
     i=0;
     b=a-1;
     while(i<b)
     {
      if(P[i]=='E')R[i]='S';
      else R[i]='E';
      ++i;
      }
      R[i]='\0';
      
     printf("Case #%d: %s\n",Q,R);
   }    
    return 0;

}