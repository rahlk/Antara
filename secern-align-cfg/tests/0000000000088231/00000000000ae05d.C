#include<stdio.h>
int main()
{
    int T,N,i,j,n,c,z,K,k,l,a[10],A,B,x;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
      scanf("%d",&N);
      n=0;
      K=N;
      while(K!=0)
      {
     K=K/10;
     n++;
      }

      c=1;
      for(l=0;l<n;l++)
      {
          c=c*10;
      }
      c=c/10;
      x=N;
      for(j=0;j<n;j++)
      {
          if((x%10)==4)
            a[j]=1;
          else
            a[j]=0;
            x=x/10;

      }

      z=0;
      for(k=(n-1);k>=0;k--)
      {
        z=c*(a[k])+z;

        c=c/10;

      }
      A=z;
      B=N-z;
      printf("#%d: %d %d\n",i,A,B);

    }
}
