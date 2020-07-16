#include<stdio.h>
#include<math.h>
void main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    { 
      int M,N;
      scanf("%d %d",&M,&N);
      if(M==N)
      {
          printf("IMPOSSIBLE");
      }
      else{
            printf("POSSIBLE");
          }
    }
}