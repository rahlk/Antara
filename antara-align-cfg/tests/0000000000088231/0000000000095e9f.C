#include<stdio.h>
int main()
{
    int T,N,A,B,S,i,j,k;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
      scanf("%d",&N);
      for(A=1;A<N;A++)
      {
          for(B=N;B>1;B--)
          {
              if(A+B==N)
              printf("Case #%d: %d %d",T,A,B)
          }
      }
    }
}